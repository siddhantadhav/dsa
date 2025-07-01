// gcd(n1, n1) = gcd(n1-n2, n2) where n1>n2
// keep truncating till one is zero
// optimized 
// gcd(n1, n2) = gcd(n1%n2, n2) where n1>n2

#include <bits/stdc++.h>

using namespace std;

void euclidean(){
  int n, m;
  cin >> n >> m;

  while(n>0 && m>0){
    if(n>m)
      n = n%m;
    else
      m = m%n;
  }
  if(n == 0)
    cout << m << "\n";
  else
    cout << n << "\n"; 
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif

  euclidean();

  return 0;
}
