#include <bits/stdc++.h>

using namespace std;

// minimum spanning tree
int spanningTree(int V, vector<vector<int>> adj[]) {
  priority_queue<pair<int, int>,vector<pair<int, int>>, greater<pair<int, int>>> pq;
  vector<int> visited(V, 0);
  
  pq.push({0,0});
  int sum = 0;
  
  while(!pq.empty()){
      int node = pq.top().second;
      int wt = pq.top().first;
      pq.pop();
      
      if(visited[node]) continue;
      visited[node] = 1;
      sum += wt;
      
      for(auto it:adj[node]){
          int adjNode = it[0];
          int adjW = it[1];
          
          if(!visited[adjNode]){
              pq.push({adjW, adjNode});
          }
      }
  }
  
  return sum;
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