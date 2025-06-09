#include <bits/stdc++.h>

using namespace std;

int timer = 0;

void dfs(int node, int parent, vector<int> &visited, vector<int> &tin, vector<int> &low, vector<int> adj[], vector<int> &mark){
  visited[node] = 1;
  tin[node] = low[node] = timer;
  timer++;
  int child = 0;

  for(auto it: adj[node]){
    if(it == parent) continue;
    if(!visited[it]){
      dfs(it, node, visited, tin, low, adj, mark);
      low[node] = min(low[node], low[it]);

      if(low[it] >= tin[node] && parent != -1){
        mark[node] = 1;
      }
      child++;
    }
    else{
      low[node] = min(low[node], tin[it]);
    }
  }

  if(child > 1 && parent == -1){
    mark[node] = 1;
  }
}

vector<int> articulationPoint(int V, vector<int> adj[]){
  vector<int> visited(V, 0);
  vector<int> tin(V);
  vector<int> low(V);

  vector<int> mark(V, 0);

  for(int i=0; i<V; i++){
    if(!visited[i]){
      dfs(i, -1, visited, tin, low, adj, mark);
    }
  }

  vector<int> ans;
  for(int i=0; i<V; i++){
    if(mark[i] == 1) ans.push_back(i);
  }

  if(ans.size() == 0) return {-1};
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