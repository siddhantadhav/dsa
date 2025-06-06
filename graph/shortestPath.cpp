#include <bits/stdc++.h>

using namespace std;

// bfs
vector<int> shortestPath(int V, int E, vector<vector<int>>& edges) {
  vector<int> indegree(V);
  vector<vector<pair<int, int>>> adj(V);

  for(auto edge:edges){
    indegree[edge[1]]++;
    adj[edge[0]].push_back({edge[1], edge[2]});
  }

  queue<int> q;

  for(int i=0; i<N; i++){
    if(indegree[i] == 0) q.push({i, adj[i]});
  }

  while(!q.empty()){
    int node = q.front();
  }
}

void dfs(int node, vector<vector<pair<int, int>>> &adj, vector<int> &visited, stack<int> st){
  visited[node] = 1;
  for(auto it:adj[node]){
    int v = it.first;
    if(!visited[v]){
      dfs(v, adj, visited, st);
    }
  }
  st.push(node);
}

vector<int> shortestPathDFS(int V, int E, vector<vector<int>>& edges){
  vector<vector<pair<int, int>>> adj(V);
  for(int i=0; i<E; i++){
    int u = edges[i][0];
    int v = edges[i][1];
    int wt = edges[i][2];

    adj[u].push_back({v, wt});
  }

  vector<int> visited(V);
  stack<int> st;

  for(int i=0; i<V; i++){
    if(!visited[i]){
      dfs(i, adj, visited, st);
    }
  }

  vector<int> dist(V, INT_MAX);
  int source = 0; // could be anything

  dist[source] = 0;

  while(!st.empty()){
    int node = st.top();
    st.pop();

    for(auto it: adj[node]){
      int v = it.first;
      int wt = it.second;

      if(dist[node] + wt < dist[v]){
        dist[v] = dist[node]+wt;
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