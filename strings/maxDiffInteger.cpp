#include <bits/stdc++.h>

using namespace std;

int maxDiff(int num){
  string str = to_string(num);
  string small = str;
  string big = str;
  int n = str.size();

  // create biggest number
  char b = 0;

  for(char ch : big){
    if(ch != '9'){
      b = ch;
      break;
    }
  }

  if(b != 0){
    for(int i=0; i<n; i++){
      if(big[i] == b) big[i] = '9';
    }
  }

  char s = 0;
  
  // create smallest number
  if(small[0] != '1'){
    s = small[0];
    
    for(char &ch: small){
      if(ch == s) ch = '1';
    }
  }
  else {
    for(int i=1; i<n; i++){
      if(small[i] != '0' && small[i] != '1'){
        s = small[i];
        break;
      }
    }

    if(s != 0){
      for(int i=0; i<n; i++){
        if(small[i] == s) small[i] = '0';
      }
    }
  }
  
  return stoi(big) - stoi(small);
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

  while(n--){
    int t;
    cin >> t;
    cout << maxDiff(t) << "\n";
  }
  
  return 0;
}
