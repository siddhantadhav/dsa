#include <bits/stdc++.h>

using namespace std;

// brute force

int majorityElementBrute(vector<int> &nums){
	int n=nums.size();
	
	for(int i=0; i<n; i++){
		int count=0;
		for(int j=i+1; j<n; j++){
			if(nums[i] == nums[j]) count++;
		}
		if(count >= n/2) return nums[i];
	}

	return -1;
}

// better approach

int majorityElementBetter(vector<int> &nums){
	int n = nums.size();
	unordered_map<int, int> mp;

	for(int i=0; i<n; i++) mp[nums[i]]++;

	for(auto x:mp){
		if(x.second > n/2) return x.first;
	}

	return -1;
}

// optimal approach Boyer-Moore Majority Voting

int majorityElement(vector<int> &nums){
	
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    vector<int> nums = {3,2,3};
    cout << majorityElementBrute(nums);

    return 0;
}