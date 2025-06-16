#include <bits/stdc++.h>

using namespace std;

// brute force

void sortColorsBrute(vector<int> &nums) {
	int n=nums.size();
	int c0=0, c1=0, c2=0;

	for(int  i=0; i<n; i++){
		if(nums[i] == 0)  c0++;
		else if(nums[i] ==  1) c1++;
		else c2++;
	}

	int i=0;

	while(i<n){
		if(c0>0){
			nums[i] = 0;
			i++;
			c0--;
		}
		else if(c1>0){
			nums[i] = 1;
			i++;
			c1--;
		}
		else{
			nums[i] = 2;
			i++;
			c2--;
		}
	}
}	

// optimal approach

void sortColors(vector<int> &nums){
	int n=nums.size();
	int low=0, mid=0, high=n-1;

	while(mid<=high){
		if(nums[mid] == 0) {
			swap(nums[low], nums[mid]);
			mid++;
			low++;
		} else if(nums[mid] == 1){
			mid++;
		} else {
			swap(nums[mid], nums[high]);
			high--;
		}
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    vector<int> nums = { 0, 1, 2, 0, 1, 2 };
    sortColors(nums);

    for(int x: nums) cout << x << " ";

    return 0;
}