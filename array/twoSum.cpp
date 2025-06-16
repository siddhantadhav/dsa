#include <bits/stdc++.h>

using namespace std;

// brute force

vector<int> twoSumBrute(vector<int>& nums, int target) {
    int n = nums.size();
    vector<int> res;
    for(int i=0; i<n; i++){
        int diff=target - nums[i]; 
        for(int  j=i+1; j<n; j++){
            if(nums[j] == diff) {
                res.push_back(i);
                res.push_back(j);
                break;
            }
        }
    }            

    return res;
}

// better approach

vector<int> twoSumBetter(vector<int> nums, int target){
    unordered_map<int, int> mp;
    int n = nums.size();

    for(int i=0; i<n; i++){
        int num = nums[i];
        int needed =   target - nums[i];
        if (mp.find(needed) != mp.end()) {
            return {mp[needed], i};
        }
        mp[num] = i;
    } 
    return {};
}	

// optimal approach but only if original index does not matter

vector<int> twoSum(vector<int> &nums, int target){
    int n = nums.size();
    sort(nums.begin(), nums.end());
    int left = 0, right = n -1;

    while(left < right){
        int sum = nums[left] + nums[right];
        if (sum == target) return {left, right};
        if(sum > target) right--;
        else left++;
    }

    return {};
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    vector<int> nums = {2,7,11,15};
    int target = 9;

    vector<int> res = twoSum(nums, target);

    for(int i=0; i<res.size(); i++){
        cout << res[i] << " ";
    }

    return 0;
}