#include <bits/stdc++.h>

using namespace std;

bool isPrimeNumber(int n){
  for(int i=1; i*i<=n; ++i){
    if(i == 1 || i == n) continue;
    if(n%i == 0) return false;
  }

  return true;
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
  
  cout << isPrimeNumber(n) << "\n";

  return 0;
}
