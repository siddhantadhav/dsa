#include <bits/stdc++.h>

using namespace std;

class DisjointSet{
  vector<int> rank, parent, size;
  
  public:
    DisjointSet(int n){
      rank.resize(n+1, 0);
      parent.resize(n+1);
      size.resize(n+1, 1);
      for(int i=0; i<=n;i++) parent[i] = i;
    }

    int findParent(int node){
      if(node == parent[node]) return node;
      return parent[node] = findParent(parent[node]);
    }

    void unionByRank(int u, int v){
      int upu = findParent(u);
      int upv = findParent(v);
      
      if(upu == upv) return;

      if(rank[upu] < rank[upv]) parent[upu] = upv;
      else if(rank[upu] > rank[upv]) parent[upv] = upu;
      else {
        parent[upv] = upu; 
        rank[upu]++;
      }
    }

    void unionBySize(int u, int v){
      int upu = findParent(u);
      int upv = findParent(v);
      
      if(upu == upv) return;

      if(size[upu] < size[upv]) parent[upu] = upv;
      else if(size[upu] > size[upv]) parent[upv] = upu;
      else {
        parent[upv] = upu; 
        size[upu]++;
      }
    }
}

int spanningTree(int V, vector<vector<int>> &adj){
  vector<pair<int, pair<int, int>>> edges;
  for(int i=0; i<V; i++){
    for(auto it:adj[i]){
      int node = i;
      int adjNode = it[0];
      int adjWt = it[1];

      edges.push_back({adjWt, {node, adjNode}});
    }
  }

  DisjointSet ds(V);
  sort(edges.begin(), edges.end());
  int mstWt = 0;

  for(auto it:edges){
    int wt = it.first;
    int u = it.second.first;
    int v = it.second.second;

    if(ds.findParent(u) != ds.findParent(v)){
      mstWt+= wt;
      ds.unionBySize(u, v);
    }
  } 

  return mstWt
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