#include <bits/stdc++.h>

using namespace std;

int lowerBound(vector<int> &nums, int x){
  int n = nums.size();
  int start = 0;
  int end = n-1;
  int ans = n-1;

  while(start<=end){
    int mid = (start + end) / 2;
    if(nums[mid]>=x){
      ans = mid;
      end = mid - 1; 
    }
    else start = mid + 1;
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

  int n, x;
  cin >> n >> x;
  vector<int> nums;

  while(n--){
    int t;
    cin >> t;
    nums.push_back(t);
  }

  cout << lowerBound(nums, x);
	return 0;
}
