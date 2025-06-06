#include <bits/stdc++.h>

using namespace std;

// works with negative wieghts
// does not work with negative cycles

vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src){
  vector<int> dist(V, 1e9);
  dist[src] = 0;

  for(int i=0; i<V-1; i++){
    for(auto edge: edges){
      int u = edge[0];
      int v = edge[1];
      int wt = edge[2];

      if(dist[u] != 1e9 && dist[u] + wt < dist[v]){
        dist[u] = dist[u] + wt;
      }
    }
  }

  for(auto edge: edges){
    int u = edge[0];
    int v = edge[1];
    int wt = edge[2];

    if(dist[u] != 1e9 && dist[u] + wt < dist[v]){
      return {-1};
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