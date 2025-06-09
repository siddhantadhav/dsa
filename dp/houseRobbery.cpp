#include <bits/stdc++.h>

using namespace std;

int recursive(int start, int end, int n, vector<int> &nums){
	if(start>end) return 0;

	int rob = nums[start] + recursive(start+2, end, n, nums);
	int skip = recursive(start+1, end, n, nums);

	return max(rob, skip);
}

int memoization(int start, int end, int n, vector<int> &nums, vector<int> &dp){
	if(start>end) return 0;
	if(dp[start] != INT_MIN) return dp[start];

	int rob = nums[start] + memoization(start+2, end, n, nums, dp);
	int skip = memoization(start+1, end, n, nums, dp);

	return dp[start] = max(rob, skip);
}

int tabulation(int start, int end, vector<int> &nums){
	int len = end - start + 1;
	vector<int> dp(len, 0);
	dp[0] = nums[start];
	if(len == 1) return dp[0];
	dp[1] = max(nums[start], nums[start + 1]);

	for(int i=2; i<len; i++){
		dp[i] = max(nums[start+i] + dp[i-2], dp[i-1]);
	}

	return dp[len - 1];
}

int robbery(int start, int end, vector<int> &nums){
	int prev1 = 0, prev2 = 0;

	for(int i=start; i<end; i++){
		int temp = prev1;
		prev1 = max(prev2, nums[i] + prev1);
		prev2 = prev1;
	}

	return prev1;
}

int rob(vector<int> &nums){
	int n = nums.size();
	vector<int> dp(n, INT_MIN);

	// int skipFirst = recursive(1, n-1, n, nums);
	// int skipLast = recursive(0, n-2, n, nums);

	// int skipFirst = memoization(1, n-1, n, nums, dp);
	// int skipLast = memoization(0, n-2, n, nums, dp);

	int skipFirst = tabulation(1, n-1,  nums);
	int skipLast = tabulation(0, n-2,  nums);

	return max(skipFirst, skipLast);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif

  vector<int> nums = {1,3,1,3,100};
  cout << rob(nums);

  return 0;
}