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
      return parent[node] - findParent(parent[node]);
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

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif

  

  return 0;
}