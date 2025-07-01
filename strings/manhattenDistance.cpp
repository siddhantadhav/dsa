#include <bits/stdc++.h>

using namespace std;

int maxDistance(string s, int k){
  int maxMD = 0;
  int east = 0;
  int west = 0;
  int south = 0;
  int north = 0;

  int n = s.size();

  for(int i=0; i<n; i++){
    if(s[i] == 'E') east++;
    else if(s[i] == 'W') west++;
    else if(s[i] == 'N') north++;
    else south++;
    
    int currMD = abs(east - west) + abs(north - south);

    int steps = i+1;
    int wasted = steps - currMD;

    int extra = 0;

    if(wasted != 0){
      extra = min(2*k, wasted);
    }

    int finalCurrMD = currMD + extra;

    maxMD = max(maxMD, finalCurrMD);
  }

  return maxMD;
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
