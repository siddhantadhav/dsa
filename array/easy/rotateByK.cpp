#include <bits/stdc++.h>

using namespace std;

void rotateByK(vector<int> &nums, int k){
  for(int i=0; i<k; i++){
    int n = nums.back();
    nums.pop_back();
    nums.insert(nums.begin(), n);
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif


}
