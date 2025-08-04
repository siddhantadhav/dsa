#include <bits/stdc++.h>

using namespace std;

int hashApproach(vector<int> &nums){
  int n = nums.size();
  vector<int> hash(n, -1);

  for(int e: nums){
    if(e<n) hash[e]++;
  }

  for(int i=0; i<n; i++){
    if(hash[i] == -1) return i;
  }
  return -1;
}

int formulaApproach(vector<int> &nums){
  int s = nums.size();
  int n = s;

  int summation = (n*(n+1)/2);
  int arraySum = 0;

  for(int i:nums)
    arraySum += i;

  return abs(arraySum - summation);
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

  vector<int> nums;

  while(n--){
    int t;
    cin >> t;
    nums.push_back(t);
  }

  cout << formulaApproach(nums) << "\n";

  return 0;
}
