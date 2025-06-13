#include <bits/stdc++.h>

using namespace std;

int longestCommonSubsequence(string text1, string text2){
  int n = text1.size();
  int m = text2.size();
  vector<string> dp1(n);
  vector<string> dp2(m);

  for(int i=0; i<n; i++){
    bool flag = false;
    for(int j=0; j<m; j++){
      if(flag == false){
        if(text1[i] == text1[j]){
          flag = true;

          
        }
      }
    }
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  
  return 0;

}
