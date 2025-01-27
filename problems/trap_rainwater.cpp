#include <bits/stdc++.h>

using namespace std;

// min(leftMax, rightMax) - height[i]

// brute force

int cntWater(vector<int> arr){
	int n = arr.size();

	vector<int> arrLeftMax;
	vector<int> arrRightMax;
	vector<int> temp;

	int left = 0;
	int right = n-1;

	int leftMax = 0;
	int rightMax = 0;

	int i =0;

	while(i < n){
		if(i == 0) {
			leftMax = arr[i];
			arrLeftMax.push_back(0);
		}
		else{
			arrLeftMax.push_back(leftMax);
			if(arr[i] > leftMax) leftMax = arr[i];
		}

		i++;
	}

	i = n-1;

	while (i > 0){
		if(i == 0){
			rightMax = arr[i];
			arrRightMax.push_back(0);
		}
		else{

		}
	}

	for(int i=0; i<n; i++){
		cout << arrLeftMax[i] << " ";
	}

	cout << "\n";

	return 0;
}

int main() {
	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    cout << "hello";
	// vector<int> arr = {3, 0, 1, 0, 4, 0, 2};

	// cout << cntWater(arr) << "\n";

	return 0;
}