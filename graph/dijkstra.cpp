#include <bits/stdc++.h>

using namespace std;

// does not work if the weights are negative

vector<int> dijkstra(int V, vector<vector<int>> &edges, int src){
  vector<vector<pair<int, int>>> adj(V);

  for(int i=0; i<edges.size(); i++){
    int u = edges[i][0];
    int v = edges[i][1];
    int wt = edges[i][2];

    adj[u].push_back({wt, v});
    adj[v].push_back({wt, u});
  }

  priority_queue<pair<int, int>,vector<pair<int, int>>, greater<pair<int, int>>> pq;

  vector<int> dist(V, 1e9);

  dist[src] = 0;
  pq.push({0, src});

  while(!pq.empty()){
    int node = pq.top().second;
    int wt = pq.top().first;
    pq.pop();

    for(auto it:adj[node]){
      int adjNode = it.second;
      int adjWt = it.first;

      if(wt + adjWt < dist[adjNode]){
        dist[adjNode] = wt + adjWt;
        pq.push({dist[adjNode], adjNode});
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