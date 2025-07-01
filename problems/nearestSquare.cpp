#include <bits/stdc++.h>

using namespace std;

int solve(int N){
  int ans = INT_MIN;
  int i = 1;
  while(true){
    if(ans >= N) break;
    int tmp = i*i;
    if(tmp<=N) ans = tmp;
    else break;
    i++;
  }

  return ans;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif

  int t;
  cin >> t;

  while(t--){
    int N;
    cin >> N;
    cout << solve(N) << "\n";
  }

  return 0;
}
