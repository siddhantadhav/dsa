#include <bits/stdc++.h>

using namespace std;

int orangesRotting(vector<vector<int>>& grid) {
  int n = grid.size();
  int m = grid[0].size();
  
  queue<pair<pair<int, int>, int>> q;
  vector<vector<int>> visited(n, vector<int>(m, 0));      

  int cntFresh = 0;

  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      if(grid[i][j] == 2) {
        q.push({{i,j}, 0});
        visited[i][j] = 2;
      }
      else if(grid[i][j] == 1) cntFresh++;
    }
  }  

  int tm = 0;
  int cntRotten =0;

  while(!q.empty()){
    int r = q.front().first.first;
    int c = q.front().first.second;
    int t = queue.front().second;
    q.pop();
    tm = max(t, tm);

    vector<int> delRow = {-1, 0, 1, 0};
    vector<int> delCol = {0, 1, 0, -1};

    for(int i=0; i<4; i++){
      int nrow = row + delRow[i];
      int ncol = col + delCol[i];

      if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && visited[nrow][col] != 2 && grio[nrow][ncol] == 1){
        q.push({{nrow, ncol}, t+1});
        visited[nrow][ncol] = 2;
        cntRotten++
      }
    }
  }

  return cntFresh!=cntRotten?-1:tm;
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