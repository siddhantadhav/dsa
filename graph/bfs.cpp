#include <bits/stdc++.h>

using namespace std;

/*
Space complexity
O(3N) = O(N);

Time complexity
O(N) + O(2E)
*/

vector<int> bfsGraph(int N, vector<int> adj[]){
	int vis[N] = {0};
	vis[0] = 1;
	queue<int> q;
	q.push(0);
	vector<int> bfs;

	while(!q.empty()){
		int node = q.front();
		q.pop();
		bfs.push_back(node);

		for(auto it:adj[node]){
			if(!vis[it]){
				vis[it] = 1;
				q.push();
			}
		}
	};

	return bfs;
}

vector<int> bfsMatrix(int N, vector<vector<int>> &matrix){
	vector<int> result;
	int visited[N] = {0};
	queue<int> q;

	visited[0] = 1;
	q.push(0);

	while(!q.empty()){
		int node = q.front();
		q.pop();
		result.push_back(node);

		for(int i=0; i<N; i++){
			if(matrix[node][i] == 1 && !visited[i]) {
				q.push();
				visited[i] = true;
			}
		}
	}

	return result;
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