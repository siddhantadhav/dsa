#include <bits/stdc++.h>

using namespace std;

void dfs(int node, vector<vector<int>> &adj, vector<int> &visited){
	visited[node] = 1;

	for(auto it:adj[node]){
		if(!visited[it]){
			dfs(it, adj, visited);
		}
	}
}

int viaDFS(vector<vector<int>> &stones){
	int n = stones.size();
	vector<vector<int>> adj(n);

	for(int i = 0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(stones[i][0] == stones[j][1] || stones[i][1] == stones[j][1]){
				adj[i].push_back(j);
				adj[j].push_back(i);
			}
		}
	}

	vector<int> visited(n, 0);
	int components = 0;
	for(int i=0; i<n; i++){
		if(!visited[i]){
			components++;
			dfs(i, adj, visited);
		}
	}

	return n - components;
}

int removeStones(vector<vector<int>> &stones){

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