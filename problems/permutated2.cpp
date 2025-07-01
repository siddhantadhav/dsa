#include <bits/stdc++.h>

using namespace std;

void solve(int x, int y, int z){
  if (y == 0 && x > z + 1)
    cout << "No";
  else
    cout << "Yes";
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
    int x, y, z;
    cin >> x >> y >> z;

    solve(x, y, z);
    cout << "\n";
  }
  return 0;
}
