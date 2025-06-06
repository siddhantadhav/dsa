#include <bits/stdc++.h>

using namespace std;

// undirected graphs
bool isCycleBFS(int V, vector<vector<int>> &edges) {
  vector<int> visited(V, 0);
  vector<vector<int>> adj;

  for(auto edge: edges){
    adj[edge[0]].push_back(edge[1]);
    adj[edge[1]].push_back(edge[0]);
  }

  for(int i=0; i<V; i++){
    if(!visited[i]){
      visited[i] = 1;
      queue<pair<int, int>> q;
      q.push({i, -1});

      while(!q.empty()){
        int node = q.front().first;
        int parent = q.front().second;
        q.pop();

        for(auto it: adj){
          if(!visited[it]){
            visited[it] = 1;
            q.push(it);
          }
          else if(parent != it){
            return true;
          }
        }
      }
    }
  }

  return false;  
}

bool dfs(int node, int parent, vector<vector<int>> &adj, vector<int> &visited){
  visited[source]=1;
  for(auto it: adj[node]){
    if(!visited[it]) dfs(it, node, adj, visited);
    else if(parent!= it) return true;
  }
  return false;
}

bool isCycleDFS(int V, vector<vector<int>> &edges){
  vector<int> visited(V, 0);
  vector<vector<int>> adj;

  for(auto edge: edges){
    adj[edge[0]].push_back(edge[1]);
    adj[edge[1]].push_back(edge[0]);
  }

  for(int i=0; i<V; i++){
    if(!visited[i]){
      if(dfs(i, -1, adj, visited) == true) return true;
    }
  }

  return false;
}

// directed graphs
bool isCycleBFS(int V, vector<vector<int>> &edges){
  vector<int> indegrees(V, 0);
  vector<vector<int>> adj(V);

  for(auto edge:edges){
    indegrees[edge[1]]++;
    adj[edge[0]].push_back(edge[1]);
  }

  queue<int> q;

  for(int i=0; i<V; i++){
    if(indegrees[i] == 0) q.push(i);
  }

  vector<int> topo;

  while(!q.empty()){
    int node=q.front();
    topo.push_back(node);
    q.pop();

    for(auto it:adj[node]){
      indegrees[it]--;
      if(indegrees[it] == 0) q.push(it);
    }
  }

  return topo.size() != V;
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