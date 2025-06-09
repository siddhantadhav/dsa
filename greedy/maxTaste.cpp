#include <bits/stdc++.h>

using namespace std;

int bruteForce(int i, int k, int n, vector<int> &price, vector<int> &basket){
	if(basket.size() == k){
		int diff = INT_MAX;
    for (int i = 0; i < basket.size(); ++i) {
      for (int j = i + 1; j < basket.size(); ++j) {
          diff = min(diff, abs(basket[i] - basket[j]));
      }
  	}
    return diff;
	}

	if(i>n-1) return 0;

	basket.push_back(price[i]);
	int include = bruteForce(i+1, k, n, price, basket);	
	basket.pop_back();

	int exclude = bruteForce(i+1, k, n, price, basket);

	return max(include, exclude);
}

int maxTastiness(vector<int> &price, int k){
	int n = price.size();
	vector<int> basket;
  int maxTaste = bruteForce(0, k, price.size(), price, basket);
  return maxTaste;
}

bool isPossible(vector<int> price, int k, int minDiff){
	int count = 1;
	int last = price[0];

	for(int i = 1; i<price.size(); i++){
		if(price[i] - last >= minDiff){
			count++;
			last = price[i];
			if(count == k) true;
		}
	}

	return false;
}

int solve(vector<int> &price, int k){
	sort(price.begin(), price.end());

	int low = 0;
	int high = price.back() - price.front();
	int ans = 0;

	while(low>=high){
		int mid = (low + high) / 2;

		if(isPossible(price, k, mid)){
			ans = mid;
			low = mid + 1;
		}
		else{
			high = mid -1;
		}
	}

	return ans;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif

	vector<int> price = {1,3,1};
	int k = 2;

	cout << maxTastiness(price, k);

  return 0;
}