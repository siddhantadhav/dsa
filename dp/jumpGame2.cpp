#include <bits/stdc++.h>

using namespace std;

int recursive(vector<int> &nums, int i, int n){
	if(i>=n-1) return 0;

	int minJumps = INT_MAX;

	for(int j=1; j<=nums[i]; j++){
		int next = i+j;
		if(next<n){
			int subJump = recursive(nums, next, n);
			if(subJump != INT_MAX) minJumps = min(minJumps, subJump + 1);
		}
	}
	
	return minJumps;
}

int memoization(vector<int> &nums, int i, int n, vector<int> &dp){
	if(i>=n-1) return 0;
	if(dp[i] != INT_MAX) return dp[i];
	int minJumps = INT_MAX;

	for(int j=1; j<=nums[i]; j++){
		int next = i+j;
		if(next<n){
			int subJump = memoization(nums, next, n, dp);
			if(subJump != INT_MAX) dp[i] = minJumps = min(minJumps, subJump + 1);
		}
	}
	
	return dp[i];
}

int tabulation(vector<int> &nums){
	int n = nums.size();
	vector<int> dp(n, INT_MAX);
	dp[0] = 0;

	for(int i = 0; i < n; i++){
		for(int j = 1; j <= nums[i]; j++){
			if(i + j < n){
				dp[i + j] = min(dp[i + j], dp[i] + 1);
			}
		}
	}

	return dp[n - 1];
}

int jump(vector<int> &nums){
	vector<int> dp(nums.size(), INT_MAX);
	// return memoization(nums, 0, nums.size(), dp);
	return tabulation(nums);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif

  vector<int> nums = {2,3,0,1,4};
  cout<< jump(nums);

  return 0;
}