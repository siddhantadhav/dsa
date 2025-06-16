#include <bits/stdc++.h>

using namespace std;

// brute force

int maxSubarrayBrute(vector<int> &nums){
	int n=nums.size();
	int res = INT_MIN;

	for(int i=0; i<n; i++){
		for(int j=i; j<n; j++){
			int sum=0;
			for(int k=i; k<=j; k++) sum+=nums[k];
			res = max(res, sum);
		}
	}

	return res;
}

// better approach

int maxSubarrayBetter(vector<int> &nums){
	int n=nums.size();
	int res = INT_MIN;

	for(int i=0; i<n; i++){
		int sum = 0;
		for(int j=i; j<n; j++){
			sum+= nums[j];
			res = max(sum, res);
		}
	}

	return res;
}

// optimal approach

int maxSubarrayOptimal(vector<int> &nums){
	int n=nums.size();
	long long res = LONG_MIN;
	long long sum = 0;

	for(int i=0; i<n; i++) {
		sum+=nums[i];
		if(sum>res) res=sum;
		if(sum<0) sum=0;
	}
	return res;
}

// printing subarray

int maxSubarrayOptimalPrint(vector<int> &nums){
	int n=nums.size();
	long long res = LONG_MIN;
	long long sum = 0;

	int start=0, ansStart=-1, ansEnd=-1;

	for(int i=0; i<n; i++){
		if (sum ==0 )start = i;
		sum+=nums[i];

		if(sum>res){
			res = sum;
			ansStart = start;
			ansEnd = i;
		}

		if(sum<0){
			sum = 0;
		}
	}

	for(int i=ansStart; i<=ansEnd; i++){
		cout << nums[i] << " ";
	}

	cout << "\n";

	return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif

	vector<int> nums = {5,4,-1,7,8};
	cout << maxSubarrayOptimalPrint(nums);

    return 0;
}