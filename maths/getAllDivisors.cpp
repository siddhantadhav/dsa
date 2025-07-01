#include <bits/stdc++.h>

using namespace std;

void getDivisors(int n){
  for(int i=1; i<n; ++i){
    if(n%i == 0) cout << i << " ";
  }

  cout << "\n";
}

void getDivisorsOptimal(int n){
  vector<int> ls;

  for(int i=1; i*i<=n; ++i){
    if(n%i == 0){
      ls.push_back(i);
      if(n/i != i){
        ls.push_back(n/i);
      }
    }
  }

  sort(ls.begin(), ls.end());

  for(auto &num: ls) cout << num << " ";
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
  
  getDivisors(n);
  getDivisorsOptimal(n);
  
  return 0;
} 
