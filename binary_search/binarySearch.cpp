#include <bits/stdc++.h>

using namespace std;

int search(vector<int> &nums, int target){
  int n = nums.size();
  int start = 0;
  int end = n - 1;

  while(start<=end){
    int mid = (start + end) / 2;
    if(nums[mid] == target) return mid;
    else if(nums[mid] < target) start = mid + 1;
    else end = mid - 1;
  }

  return -1;
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
  
  int target;
  cin >> target;

  vector<int> nums;

  while(n--){
    int t;
    cin >> t;
    nums.push_back(t);
  }

  cout << search(nums, target);

	return 0;
}
