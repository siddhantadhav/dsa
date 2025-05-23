#include <bits/stdc++.h>

using namespace std;

int binary_search(vector<int> &nums, int target){
	int n = nums.size();
	int low = 0 , high = n-1;

	while(low <= high){
		int mid = (high + low) / 2;
		if (nums[mid] == target) return mid;
		else if(target > nums[mid]) low = mid+1;
		else high = mid -1;
	}

	return -1;
}

int binary_search_recursive(vector<int> &nums, int target){
	
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin >> n;

	vector<int> nums;

	while(n--){
		int tmp;
		cin >> tmp;
		nums.push_back(tmp);
	}

	cout << binary_search(nums, 5);

	return 0;
}