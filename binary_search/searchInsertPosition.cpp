#include <bits/stdc++.h>

using namespace std;

int searchInsert(vector<int> &nums, int target){
  int n = nums.size();
  int low = 0;
  int high = n-1;

  int ans = n;

  while(low<=high){
    int mid = (low + high) / 2;

    if(nums[mid] == target) return mid;

    if(nums[mid]>target){
      ans = mid;
      high = mid-1;
    }
    else low = mid+1;
  }

  return ans;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

  return 0;
}
