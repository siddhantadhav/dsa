#include <bits/stdc++.h>

using namespace std;

int maxPerformance(int n, vector<int> &speed, vector<int> &efficiency, int k){
	const int MOD = 1e9 + 7;

	vector<pair<int, int>> eng;

	for(int i=0; i<n; i++){
		pair<int, int> e = {efficiency[i], speed[i]};
		eng.push_back(e);
	}

	sort(eng.rbegin(), eng.rend());

	long speedSum = 0, maxPer = 0;

	priority_queue<int, vector<int>, greater<int>> minHeap;

	for(auto &[currEff, currSpeed] : eng){
		minHeap.push(currSpeed);
		speedSum += currSpeed;

		if(minHeap.size() > k){
			speedSum -= minHeap.top();
			minHeap.pop();
		}

		long performance = speedSum * currEff;
		maxPer = max(maxPer, performance);
	}

	// return maxPer % MOD
	return maxPer;

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int n = 6;
	vector<int> speed = {2,10,3,1,5,8};
	vector<int> efficiency = {5,4,3,9,7,2};
	int k = 2;

	cout << maxPerformance(n, speed, efficiency, k);

	return 0;
}