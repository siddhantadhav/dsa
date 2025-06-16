#include <bits/stdc++.h>

using namespace std;

/*
intuition:
if we replace the starting number with 9 we get the biggest number
and if we replace starting number with 0 we get the smallest number

*/
int minMaxDifference(int num){
  string str = to_string(num);
  int n = str.size();
  
  char bChar;
  for(int i=0; i<n; i++){
    if(str[i] != '9') {
      bChar = str[i];
      break;
    }
  }

  string big = str;
  
  if(bChar){
    for(int i=0; i<n; i++){
      if(big[i] == bChar) big[i] = '9';
    }
  }

  char sChar = str[0];
  string small = str;

  for(int i=0; i<n; i++){
    if(small[i] == sChar) small[i] = '0';
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

  
  return 0;
}
