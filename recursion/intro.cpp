// when a function calls itself

#include <bits/stdc++.h>

using namespace std;

void printNTimes(int cnt = 0){
  if(cnt == 10) return;

  cout << "Hello World" << "\n";
  cnt++;
  printNTimes(cnt);
}

int sumNnumbers(int n, int sum = 0){
  if(n<1)
    return sum;

  return sumNnumbers(n-1, sum+n);
}

int factorial(int n){
  if(n == 0) return 1;
  return n*factorial(n-1);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif

  // printNTimes();
  // cout << sumNnumbers(10);
  cout << factorial(3);
  
  return 0;
}
