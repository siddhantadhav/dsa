#include <bits/stdc++.h>

using namespace std;

void dfs(int node, vector<vector<int>> &adj, vector<int> &visited, stack<int> &st){
  visited[node] = 1;
  for(auto it:adj[node]){
    if(!visited[it]) dfs(it, adj, visited, st);
  }
  st.push(node);
}

vector<int> topoSortDFS(vector<vector<int>> &edges){
  int V = edges.size();
  vector<int> visited(V, 0);
  stack<int> st;
  vector<vector<int>> adj(V);
  
  for(auto edge:edges){
    adj[edge[0]].push_back(edge[1]);
  }

  for(int i=0; i<V; i++){
    if(!visited[i]) dfs(i, adj, visited, st);
  }

  vector<int> ans;

  while(!st.empty()){
    int node = st.top();
    st.pop();
    ans.push_back(node);
  }

  return ans;
}

vector<int> topoSortBFS(vector<vector<int>> &edges){
  int V=edges.size();
  vector<int> indegrees(V,0);
  vector<vector<int>> adj(V);

  for(auto edge: edges){
    indegrees[edge[1]]++;
    adj[edge[0]].push_back(edge[1]);
  }

  queue<int> q;

  for(int i=0; i<V; i++){
    if(indegrees[i] == 0) q.push(i);
  }

  vector<int> ans;

  while(!q.empty()){
    int node=q.front();
    ans.push_back(node);
    q.pop();

    for(auto it:adj[node]){
      indegrees[it]--;
      if(indegrees[it] == 0){
        q.push(it);
      }
    }
  }

  return ans;
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