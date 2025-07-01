#include <bits/stdc++.h>

using namespace std;

int reverseNumber(int n){
  int reverse = 0;

  while(n>0){
    int ld = n%10;
    reverse = (reverse*10) + ld;
    n = n/10;
  }

  return reverse;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif // 
  
  int n;
  cin >> n;

  cout << reverseNumber(n) << "\n";

  return 0;
}
