#include <bits/stdc++.h>

using namespace std;

// brute force
int maxProfitBrute(vector<int> &prices){
	int n = prices.size();
	int profit = INT_MIN;	

	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			int temp = prices[j] - prices[i];
			profit = max(temp, profit);
		}
	}
	return profit>0?profit:0;
}

// optimal

int maxProfitOptimal(vector<int> &prices){
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

	vector<int> prices = {7,1,5,3,6,4};

	cout << maxProfitOptimal(prices);	

    return 0;
}