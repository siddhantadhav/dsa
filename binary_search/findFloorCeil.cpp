#include <bits/stdc++.h>

using namespace std;

// lower bound for x
int findFloor(vector<int> &nums, int x){
  int n = nums.size();
  int start = 0;
  int end = n-1;

  int ans = nums[0];

  while(start<=end){
    int mid = (start + end) / 2;
    if(nums[mid] == x) return nums[mid];
    else if(nums[mid]<=x){
      ans = mid;
      start = mid+1;
    }
    else end = mid-1;
  }

  return nums[ans];
}

// upper bound for x
int findCeil(vector<int> &nums, int x){
  int n = nums.size();
  int start = 0;
  int end = n-1;

  int ans = nums[end];

  while(start<=end){
    int mid = (start + end) / 2;
    if(nums[mid] == x) return nums[mid];
    else if(nums[mid]>=x){
      ans = mid;
      end = mid-1;
    }
    else start = mid+1;
  }
  return nums[ans];
}

pair<int, int> getFloorCeil(vector<int> &nums, int x){
  int floor = findFloor(nums, x);
  int ceil = findCeil(nums, x);

  pair<int, int> ans = {floor, ceil};
  return ans;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

  vector<int> nums = {3, 4, 4, 7, 8, 10};
  int x = 5;

  pair<int, int> ans = getFloorCeil(nums, x);
  cout << ans.first << "\n" << ans.second;

	return 0;
}
