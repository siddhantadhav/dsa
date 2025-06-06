#include <bits/stdc++.h>

using namespace std;

void bfs(int row, int col, vector<vector<int>> &visited, vector<vector<char>> &grid){
    int n = grid.size();
    int m = grid[0].size();
    visited[row][col] = 1;
    queue<pair<int, int>> q;
    q.push({row, col});

    while(!q.empty()){
        int row = q.front().first;
        int col = q.front().second;
        q.pop();

        vector<int> delRow = {-1,0,1,0};
        vector<int> delCol = {0,1,0,-1};

        for(int i=0; i<delRow.size(); i++){
        	int nrow = row + delRow[i];
        	int ncol = col + delCol[i];

        	if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol] == '1' && !visited[nrow][ncol]){
        		visited[nrow][ncol] = 1;
        		q.push({nrow, ncol});
        	}
        }
    }
}

int numIslands(vector<vector<char>> &grid){
	int n = grid.size();
	int m = grid[0].size();

	vector<vector<int>> visited(n, vector<int>(m, 0));
	
	int cnt = 0;
	for(int row=0; row<n; row++){
		for(int col=0; col<m; col++){
			if(!visited[row][col] && grid[row][col] == '1'){
				cnt++;
				bfs(row, col, visited, grid);
			}
		}
	}	
	return cnt;
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