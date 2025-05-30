#include <bits/stdc++.h>

using namespace std;

int maxArray(vector<int> &arr){
	int max = arr[0];

	for(int i=1; i<arr.size(); i++){
		if(arr[i] > max) max = arr[i];
	}

	return max;
}

int secondMaxArray(vector<int> &arr){
	sorted(arr.begin(), arr.end());
	return arr[-2];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif

	vector<int> arr = {1,2,3,4};
	cout << maxArray(arr);

    return 0;
}
