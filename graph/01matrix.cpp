#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> updateMatrix(vector<vector<int>> &mat){
  int N = mat.size();
  int M = mat[0].size();

  vector<vector<int>> visited(N, vector<int>(M, 0));
  vector<vector<int>> dist(N, vector<int>(M, 0));
  queue<pair<pair<int, int>, int>> q;

  for(int i=0; i<N; i++){
    for(int j=0; j<M; j++){
      if(mat[i][j] == 0){
        q.push({{i, j}, 0});
        visited[i][j] = 1;
      }
    }
  }

  while(!q.empty()){
    int row = q.front().first.first;
    int col = q.front().first.second;
    int steps = q.front().second;
    q.pop();
    dist[row][col] = steps;

    vector<int> delRow = {-1, 0, 1, 0};
    vector<int> delCol = {0, 1, 0, -1};

    for(int i=0; i<4; i++){
      int nrow = row + delRow[i];
      int ncol = col + delCol[i];

      if(nrow>=0 && nrow<N && ncol>=0 && ncol<M && visited[i][j] == 0){
        visited[nrow][ncol] = 1;
        q.push({{nrow, ncol}, steps+1});
      }
    }
  }

  return dist;
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