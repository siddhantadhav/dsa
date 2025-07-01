#include <bits/stdc++.h>

using namespace std;

bool isArmstrong(int n){
  int og = n;
  int sum = 0;

  while(n>0){
    int ld = n%10;
    sum = sum + (ld * ld * ld);
    n = n/10;
  }

  return og == sum;
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

  cout << isArmstrong(n) << "\n";
  
  return 0;
}
