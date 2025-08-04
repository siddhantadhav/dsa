#include <bits/stdc++.h>

using namespace std;

int solve(int k, vector<int> nums){
  int n = nums.size();
  int sum = 0;
  int maxCount = 0;
  int cnt = 0;

  for(int i=0; i<n; i++){
    sum += nums[i];
    cnt++;

    if(nums[i] > k) continue;

    if(sum == k){
      maxCount = max(maxCount, cnt);
      cnt = 0;
      sum = 0;
      continue;
    }

    for(int j=i+1; j<n; j++){
      if(sum + nums[j] > k) break;
      sum += nums[j];
      cnt++;

      if(sum == k){
        maxCount = max(maxCount, cnt);
        cnt = 0;
        sum = 0;
        break;
      }
    }
  }

  return maxCount;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif

  int n, k;
  cin >> n >> k;
  vector<int> nums;

  while(n--){
    int t;
    cin >> t;
    nums.push_back(t);
  }

  cout << solve(k, nums) << "\n";

  return 0;
}
