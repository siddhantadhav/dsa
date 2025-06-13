#include <bits/stdc++.h>

using namespace std;

int firstOccurance(vector<int> &nums, int target){
  int n = nums.size();
  int start = 0;
  int end = n-1;

  int ans = -1;

  while(start<=end){
    int mid = (start+end)/2;
    if(nums[mid] == target){
      ans = mid;
      end = mid-1;
    }
    else if(nums[mid]<target) start = mid+1;
    else end = mid-1;
  }

  return ans;
}

int lastOccurance(vector<int> &nums, int target){
  int n = nums.size();
  int start = 0;
  int end = n-1;

  int ans = -1;
  
  while(start<=end){
    int mid = (start+end)/2;
    if(nums[mid] == target){
      ans = mid;
      start = mid+1;
    }
    else if(nums[mid]>x) end = mid-1;
    else start = mid+1;
  }

  return ans;
}

vector<int> searchRange(vector<int> &nums, int target){
  int firstOccurance = firstOccurance(nums, target);
  int lastOccurance = lastOccurance(nums, target);

  vector<int> res;

  res.push_back(firstOccurance);
  (lastOccurance > -1 && lastOccurance != firstOccurance) ? res.push_back(lastOccurance):res.push_back(-1);

  return res;
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
