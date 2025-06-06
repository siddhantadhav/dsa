#include <bits/stdc++.h>

using namespace std;

void dfs(int row, int col, vector<vector<int>> &ans, vector<vector<int>> &image, int initColor, int color, vector<int> &deltaRow, vector<int> &deltaCol){
  ans[row][col] = color;
  int n = image.size();
  int m = image[0].size();

  for(int i=0; i<4; i++){
    int nrow = row + deltaRow[i];
    int ncol = col + deltaCol[i];

    if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol] == initColor && ans[nrow][ncol] != color){
      dfs(nrow, ncol, ans, image, color, deltaRow, deltaCol);
    }
  }
}

vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
  int initColor = image[sr][sc];
  vector<vector<int>> ans = image;
  vector<int> deltaRow = {-1, 0, 1, 0};
  vector<int> deltaCol = {-0, 1, 0, -1};
  dfs(sr, sc, ans, image, initColor, color, deltaRow, deltaCol);

  return ans;
}	

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	vector<vector<int>> image = {{1,1,1},{1,1,0},{1,0,1}};
  int sr = 1;
  int sc = 1;
  int color = 2;

  vector<vector<int>> result = floodFill(image, sr, sc, color);

  for(int i=0; i<result.size(); i++){
    for(int j=0; j<result[0].size(); j++){
      cout << result[i][j] << " ";
    }
    cout << "\n";
  }

  return 0; 
}