#include <bits/stdc++.h>

using namespace std;

int maxProfit(vector<int>& prices) {
  int n = prices.size();
  int profit = 0;
  int minPrice = INT_MAX;

  for(int i=0; i<n; i++){
      minPrice = min(minPrice, prices[i]);
      profit = max(profit, prices[i] - minPrice);
  }
  
  return profit;
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