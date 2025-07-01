#include <bits/stdc++.h>

using namespace std;

/*
intuition
every time difference between start and ith index nums is greater than k we know we know its
start of new subsequence
we sort the array to keep k minimal
*/

int partitionArray(vector<int> &nums, int k){
  int n = nums.size();
  sort(nums.begin(), nums.end());
  int count = 1;

  int start = nums[0];

  for(int i=1; i<n; i++){
    if(nums[i] - start > k){
      count++;
      start = nums[i];
    }
  }

  return count;
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
