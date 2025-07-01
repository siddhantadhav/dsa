#include <iostream>
#include <string>

using namespace std;

/*

1. a should be substring of s
2. c should be substring of s
3. b should be substring of a+c
4. a+b+c = s

*/

void solve(string s, int n){

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

  while(t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    solve(s, n);
    cout << "\n";
  }
  
  return 0;
}
