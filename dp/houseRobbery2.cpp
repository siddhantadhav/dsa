#include <bits/stdc++.h>

using namespace std;

int robbery(int start, int end, vector<int> &nums){
  int prev1 = 0, prev2 = 0;
  
  for(int i = start; i < end; i++) {
      int temp = prev1;
      prev1 = max(prev2 + nums[i], prev1);
      prev2 = temp;
  }
  return prev1;
}

int tabulation(vector<int> &nums, int start, int end){
	int len = end - start + 1;
	vector<int> dp(len, 0);

	dp[0] = nums[start];
	if (len == 1) return dp[0];

	dp[1] = max(nums[start], nums[start + 1]);

	for (int i = 2; i < len; i++) {
		dp[i] = max(nums[start + i] + dp[i - 2], dp[i - 1]);
	}

	return dp[len - 1];
}

int memoization(vector<int> &nums, int start, int end, vector<int> &dp){
	if(start>end) return 0;
	if(dp[start] != -1) return dp[start];

	int rob = nums[start] + memoization(nums, start+2, end, dp);
	int skip = memoization(nums, start+1, end, dp);

	return dp[start] = max(rob, skip);
}

int bruteForce(vector<int> &nums, int start, int end){
	if(start>end) return 0;

	int rob = nums[start] + bruteForce(nums, start+2, end);
	int skip = bruteForce(nums, start+1, end);

	return max(rob, skip);
}

int rob(vector<int> &nums){
	int n = nums.size();
	if(n == 0) return 0;
	if(n == 1) return nums[1];

	vector<int> dp(n, -1);

	// int skipFirst = bruteForce(nums, 1, n-1);
	// int skipLast = bruteForce(nums, 0, n-2);

	// int skipFirst = memoization(nums, 1, n-1, dp);
	// int skipLast = memoization(nums, 0, n-2, dp);

	int skipFirst = tabulation(nums, 1, n-1);
	int skipLast = tabulation(nums, 0, n-2);

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