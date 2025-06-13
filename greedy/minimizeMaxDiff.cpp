#include <bits/stdc++.h>

using namespace std;


/*

intuition
substracting current element with its next neighbour will keep the diff minimum

alogrithm

sort the array
initialize low, high(diff between min and max), result(high)
while low<=high
  mid = low + high / 2

  can we have p pairs whose diff is <= mid -> create function which finds p pairs whose diff <= mid return true/false
  if yes:
    local result = mid
    try to minimize the mid by moving high to mid - 1
  else:
    since we cannot find p pairs whose diff is <= mid
    loosen the max diff by movind low to mid + 1

 */

bool canFormPairs(vector<int> &nums, int p, int maxDiff){
  int cnt = 0;

  for(int i=0; i<nums.size()-1; i++){
    if(abs(nums[i] - nums[j]) <= maxDiff){
      cnt++;
      i+=2;
    }
    else i++;    
  }

  cnt >=p;
}

int minimizeMax(vector<int> &nums, int p){
  int n = nums.size();
  sort(nums.begin(), nums.end());
  
  int low = 0;
  int high = nums.back() - nums.front();
  int result = high;

  while(low<=high){
    int mid = (low + high) / 2;
  
    if(canFormPairs(nums, p, mid)){
      result = high;
      high = mid-1;
    }
    else low = mid+1;
  }

  return result;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
  
  vector<int> nums = {10,1,2,7,1,3};
  int p = 2;

  cout << minimizeMax(nums, p);

	return 0;
}
