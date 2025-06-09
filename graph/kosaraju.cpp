#include <bits/stdc++.h>

using namespace std;

// used to find strongly connected components in directed graphs

void dfs(int node, vector<int> &visited, vector<vector<int>> &adj, stack<int> &st){
  visited[node] = 1;
  
  for(auto it:adj[node]){
    if(!visited[it]){
      dfs(it, visited, adj, st);
    }
  }

  st.push(node);
}

void dfs2(int node, vector<int> &visited, vector<vector<int>> &adjT, vector<int> &components){
  visited[node] = 1;
  components.push_back(node);

  for(auto it: adjT[node]){
    if(!visited[it]){
      dfs2(it, visited, adjT, components);
    }
  }
}

int kosaraju(vector<vector<int>> &adj){
  int V = adj.size();
  vector<int> visited(V, 0);
  stack<int> st;

  for(int i=0; i<V; i++){
    if(!visited[i]){
      dfs(i, visited, adj, st);
    }
  }

  vector<vector<int>> adjT(V);

  for(int i=0; i<V; i++){
    visited[i] =0;
    for(auto it: adj){
      adjT[it].push_back(i);
    }
  }

  int sccCount = 0;
  vector<vector<int>> scc;

  while(!st.empty()){
    int node = st.top();
    st.pop();

    if(!visited[node]){
      vector<int> components;
      sccCount++;
      dfs2(node, visited, adjT, components);
      scc.push_back(components);
    }
  }

  return sccCount;
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