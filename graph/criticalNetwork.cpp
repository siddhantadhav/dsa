#include <bits/stdc++.h>

using namespace std;

int timer = 1;

void dfs(int node, int parent, vector<int> &visited, vector<vector<int>> &adj, vector<int> &tin, vector<int> &low, vector<vector<int>> &bridges){
  visited[node] = 1;
  tin[node] = low[node] = timer;
  timer++;

  for(auto it: adj[node]){
    if(parent == it) continue;
    if(!visited[it]){
      dfs(it, node, visited, adj, tin, low, bridges);
      low[node] = min(low[node], low[it]);

      if(low[it] > low[node]){
        bridges.push_back({node, it});
      }
    }
    else{
      low[node] = min(low[node], low[it]);
    }
  }
}

vector<vector<int>> criticalConnections(int n,vector<vector<int>> &connections){
  vector<vector<int>> adj(n);

  for(auto it:connections){
    adj[it[0]].push_back(it[1]);
    adj[it[1]].push_back(it[0]);
  }

  vector<int> visited(n, 0);
  vector<int> tin(n);
  vector<int> low(n);

  vector<vector<int>> bridges;

  dfs(0, -1, visited, adj, tin, low, bridges);

  return bridges;

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