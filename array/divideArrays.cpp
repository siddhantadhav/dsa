#include <bits/stdc++.h>

using namespace std;

/*

intuition
iterate in pairs of three and find max difference between them if the max difference is greater than k return empty array
sorting was necessary to keep the difference between array minimum

*/

vector<vector<int>> divideArray(vector<int> &nums, int k){
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;

    for (int i = 0; i < nums.size(); i += 3) {
        int a = nums[i], b = nums[i + 1], c = nums[i + 2];
        int max_diff = max({abs(a - b), abs(a - c), abs(b - c)});

        if (max_diff > k) return {};  // condition fails

        res.push_back({a, b, c});
    }

    return res;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif

  vector<int> nums = {4,2,9,8,2,12,7,12,10,5,8,5,5,7,9,2,5,11};
  int k = 14;
  
  vector<vector<int>> ans = divideArray(nums, k);

  for(auto &vec : ans){
    for(auto &ele: vec){
      cout << ele << " ";
    }
    cout << "\n";
  }
  
  return 0;
}
