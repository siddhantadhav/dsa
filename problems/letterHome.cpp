#include <bits/stdc++.h>

using namespace std;

/*



*/


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
    int n, s;
    cin >> n >> s;

    vector<int> pos(n);
    for(int i=0; i<n; i++){
      cin >> pos[i];
    }

    int left = pos[0];
    int right = pos[n-1];

    int steps = max(abs(s - left), abs(s - right));
    cout << steps << "\n";
  }

  return 0;
}
