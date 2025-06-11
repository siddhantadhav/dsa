#include <bits/stdc++.h>

using namespace std;

int removeDuplicates(vector<int> &nums) {
  int n = nums.size();
  int k = 1;

  for(int i=0; i<n; i++){
    if(nums[i] == nums[k-1]) {
    	nums[k] = nums[i];
    	k++;
    }
  }

  return k;
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

