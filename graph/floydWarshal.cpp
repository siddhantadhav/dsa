#include <bits/stdc++.h>

using namespace std;

void shortest_distance(vector<vector<int>> &matrix){
  int n = matrix.size();
  int m = matrix[0].size();

  for(int i=0; i<n;i++){
    for(int j=0; j<m; j++){
      if(matrix[i][j] == -1) matrix[i][j] = 1e9;
      if(i==j) matrix[i][j] = 0;
    }
  }

  for(int k=0; k<n; k++){
    for(int i=0; i<n; i++){
      for(int j=0; j<m;j++){
        matrix[i][j] = min(matrix[i][j], matrix[i][k] + matrix[k][j]);
      }
    }
  }

  for(int i=0; i<n;i++){
    for(int j=0; j<m; j++){
      if(matrix[i][j] == 1e9) matrix[i][j] = -1;
    }
  }
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