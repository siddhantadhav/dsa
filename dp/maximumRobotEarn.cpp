#include <bits/stdc++.h>

using namespace std;

// optimal

int dfsTabulation(vector<vector<int>> &coins, int n, int m, vector<vector<vector<int>>> &dp){
  for(int k=0; k<3; k++){
    if(coins[0][0] >=0) dp[0][0][k] = coins[0][0];
    else{
      if(k>0) dp[0][0][k] = 0;
      else dp[0][0][k] = coins[0][0];
    }
  }

  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      for(int k=0; k<3; k++){
        if(i==0 && j==0) continue;

        int curr = coins[i][j];
        int profit = INT_MIN;

        int up = i>0 ? dp[i-1][j][k]:INT_MIN;
        int left = j>0 ? dp[i][j-1][k]:INT_MIN;

        if(curr>=0) {
          int best = max(up, left);
          if(best != INT_MIN) profit = curr + best;
        }
        else{
          int takeHit = max(up, left);
          if(takeHit != INT_MIN) profit = curr + takeHit;
          if(k>0){
            int nup = i>0?dp[i-1][j][k-1]:INT_MIN;
            int nleft = j>0?dp[i][j-1][k-1]:INT_MIN;

            int neutralise = max(nup, nleft);
            if(neutralise != INT_MIN) profit = max(profit, neutralise);
          }
        }
        dp[i][j][k] = profit;
      }
    }
  }

  return max({dp[n-1][m-1][0], dp[n-1][m-1][1], dp[n-1][m-1][2]});
}

// better
int dfsMemoisation(int row, int col, int robbersUsed, vector<vector<int>> &coins, int n, int m, vector<vector<vector<int>>> &dp){
  // out of bound
  if (row >= n || col >=m) return INT_MIN;

  if(dp[row][col][robbersUsed] != INT_MIN) return dp[row][col][robbersUsed];

  int curr = coins[row][col];
  int profit = INT_MIN;

  // base case
  if(row == n-1 && col == m-1){
    if (curr>=0) return curr;
    else{
      if(robbersUsed<2) return 0;
      else return curr;
    }
  }

  // option 1
  if(curr>=0){
    int right = dfsMemoisation(row, col+1, robbersUsed, coins, n, m, dp);
    int down = dfsMemoisation(row+1, col, robbersUsed, coins, n, m, dp);
    profit = curr + max(right, down);
  }
  else{
    // option 2
    int takeHit = curr + max(dfsMemoisation(row, col+1, robbersUsed, coins, n, m, dp), dfsMemoisation(row+1, col, robbersUsed, coins, n, m, dp));
    profit = max(profit, takeHit);

    if(robbersUsed<2){
      int neutralise = max(dfsMemoisation(row, col+1, robbersUsed + 1, coins, n, m, dp), dfsMemoisation(row+1, col, robbersUsed + 1, coins, n, m, dp));
      profit = max(profit, neutralise);
    }
  }

  return dp[row][col][robbersUsed] = profit;
}

// brute force recursion
int dfs(int row, int col, int robbersUsed, vector<vector<int>> &coins, int n, int m){
  // out of bound
  if (row >= n || col >=m) return INT_MIN;

  int curr = coins[row][col];
  int profit = INT_MIN;

  // base case
  if(row == n-1 && col == m-1){
    if (curr>=0) return curr;
    else{
      if(robbersUsed<2) return 0;
      else return curr;
    }
  }

  // option 1
  if(curr>=0){
    int right = dfs(row, col+1, robbersUsed, coins, n, m);
    int down = dfs(row+1, col, robbersUsed, coins, n, m);
    profit = curr + max(right, down);
  }
  else{
    // option 2
    int takeHit = curr + max(dfs(row, col+1, robbersUsed, coins, n, m), dfs(row+1, col, robbersUsed, coins, n, m));
    profit = max(profit, takeHit);

    if(robbersUsed<2){
      int neutralise = max(dfs(row, col+1, robbersUsed + 1, coins, n, m), dfs(row+1, col, robbersUsed + 1, coins, n, m));
      profit = max(profit, neutralise);
    }
  }

  return profit;
}

int maximumAmount(vector<vector<int>>& coins) {
  int n = coins.size();
  int m = coins[0].size();
  vector<vector<vector<int>>> dp(n, vector<vector<int>>(m, vector<int>(3, INT_MIN)));
  // return dfsMemoisation(0, 0, 0, coins, n, m, dp);
  return dfsTabulation(coins, n, m, dp);
} 

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif

  int n, m;
  cin >> n >> m;
  vector<vector<int>> coins = {
        {-7, 12, 12, 13},
        {-6, 19, 19, -6},
        {9, -2, -10, 16},
        {-4, 14, -10, -9}
    };
  cout << maximumAmount(coins);
  return 0;
}