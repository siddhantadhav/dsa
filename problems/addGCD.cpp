#include <bits/stdc++.h>

using namespace std;

int solve(int x, int y){
  int i = 2;
  int cnt = 0;
  while(true){
    if(x%i == 0 && y%i == 0) break;
    if(x%i != 0){
      cnt++;
      x++;
    }
    else if(y%i != 0){
      cnt++;
      y++;
    }
    else i++;
  }

  return cnt;
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
    int x, y;
    cin >> x >> y;
    cout << solve(x, y) << "\n";
  }

  return 0;
}
