#include <bits/stdc++.h>

using namespace std;

vector<int> rearrangeArray(vector<int> &nums){
	int n = nums.size();
	vector<int> pos;
	vector<int> neg;

	for(int i : nums) {
		if(i<0) neg.push_back(i);
		else pos.push_back(i);
	}	

	int i =0;
	int pi =0;
	int ni =0;

	while(i<n){
		if(i%2 == 0){
			nums[i] = pos[pi];
			pi++;
		} else{
			nums[i] = neg[ni];
			ni++;
		}
		i++;
	}
	return nums;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif

	vector<int> nums = { 3,1,-2,-5,2,-4 };
	rearrangeArray(nums);

	for(int i=0; i<nums.size(); i++){
		cout << nums[i] << " ";
	}

    return 0;
}