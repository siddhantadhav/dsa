#include <bits/stdc++.h>

using namespace std;


// Time complexity O(n^3)
int maxSubarrayBruteForce(vector<int> &nums) {
  int best = INT_MIN;

  int n = nums.size();

  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      int sum = 0;
      for (int k=i; k<=j; k++) {
        sum += nums[k];
      }
      best = max(best, sum);
    }
  }
  
  return best;
}

// Time complexity O(n^2)
int maxSubarrayOptimized(vector<int> &nums) {
  int best = INT_MIN;

  int n = nums.size();

  for(int i=0; i<n; i++) {
    int sum = 0;
    for(int j=0; j<n; j++) {
      sum += nums[j];
      best = max(best, sum);
    }
  }

  return best;
}

// Time complexity O(n)
int maxSubarrayOptimal(vector<int> &nums) {
  int best = INT_MIN;
  int sum = 0;
  int n = nums.size();

  for(int i=0; i<n; i++) {
    sum = max(nums[i], sum+nums[i]);
    best = max(best, sum);
  }
  return best;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#else
// online submission
#endif

  // array size input
  int n;
  cin >> n;

  // declaring vector<int> of size n
  vector<int> nums;

  // filling vector with the values
  while (n--) {
    int m;
    cin >> m;
    nums.push_back(m);
  }

  cout << maxSubarrayOptimal(nums);

  return 0;
}
