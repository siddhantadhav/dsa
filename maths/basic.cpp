#include <iostream>

using namespace std;

// digit extraction

void extractNumber(){
  int n;
  cin >> n;

  while(n>0){
    int last = n%10;
    n = n/10;
    cout << last << " ";
  }
}

void countDigits(){
  int n;
  cin >> n;

  int cnt = 0;

  while(n>0){
    ++cnt;
    n = n/10;
  }

  cout << n;
}
// O(log10(N))

void countDigitsOptimal(){
  int n;
  cin >> n;
  
  int cnt = (int) log10(n) + 1;
  return cnt;
}


int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif // !DEBUG

  extractNumber();

  return 0;
}
