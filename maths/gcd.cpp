#include <bits/stdc++.h>

using namespace std;

void getGCD(){
  int n, m;
  cin >> n >> m;

  for(int i=min(n, m); i>=1; --i){
    if(n%i == 0 && m%i == 0){
      cout << i << "\n";
      break;
    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif

  getGCD();

  return 0;
}
