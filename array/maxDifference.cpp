#include <bits/stdc++.h>

using namespace std;

// brute force
int bruteForce(vector<int> &nums){
  int n = nums.size();

  int ans = -1;

  for(int i=0; i<n; i++){
    int maxDiff = -1;
    for(int j=i+1; j<n; j++){
      if(nums[j] > nums[i]){
        int diff = nums[j] - nums[i];
        if(maxDiff < diff) maxDiff = diff;
      }
    }
    if(ans < maxDiff) ans = maxDiff;
  }

  return ans;
}

int betterApproach(vector<int> &nums){
  int n = nums.size();
  if(n < 2) return -1;

  int minVal = nums[0];
  int maxDiff = -1;

  for(int i=1; i<n; i++){
    if(nums[i] > minVal){
      maxDiff = max(maxDiff, nums[i] - minVal);     
    }
    else {
      minVal = nums[i];
    }
  }

  return maxDiff;
}

int maxDifference(vector<int> &nums){
  // int ans = bruteForce(nums);
  int ans = betterApproach(nums);
  return ans;
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

  while (n--) {
    int s;
    cin >> s;
    vector<int> nums;

    while(s--){
      int t;
      cin >> t;
      nums.push_back(t);
    }

    cout << maxDifference(nums) << "\n";
  }
  
  return 0;
}
