#include <bits/stdc++.h>

using namespace std;

int findNextStone(vector<int> &stones, int start, int end){
	int left = start;
	int right = stones.size() - 1;

	while(left<=right){
		int mid = (left + right) / 2;
		if(stones[mid] == end) return mid;
		else if(stones[mid] > end) right = mid - 1;
		else left = mid + 1;
	}

	return -1;
}

bool recursive(vector<int> &stones, int prevJump, int i, vector<vector<int>> &dp){
	if(i == stones.size() - 1) return true;

	// memoiz
	if(dp[i][prevJump] != -1) return dp[i][prevJump)];

	for(int jump = prevJump - 1; jump <= prevJump + 1; jump++){
		int nextPos = jump + stones[i];
		int nextStone = findNextStone(stones, i+1, nextPos);

		if(nextPos != -1){
			if(recursive(stones, jump, nextStone, dp)) return dp[i][prevJump] = 1;
		}
	}

	return false;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif

  

  return 0;
}