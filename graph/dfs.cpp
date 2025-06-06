#include <bits/stdc++.h>

using namespace std;
/*
Space complexity
O(N) + O(N) + O(N) ~ O(N) + O(2E)
*/
void dfs(int node, vector<int> adj[], int vis[], vector<int> &ls){
	vis[node] = 1;
	ls.push_back(node);
	for(auto it:adj[node]) {
		if(!vis[it]){
			dfs(it, adj, vis, ls);
		}
	}	
}

vector<int> dfsGraphs(int N, vector<int> adj[]) {
	int vis[N] = {0};
	vector<int> ls;
	int start = 0;
	dfs(start, adj, vis, ls);

	return ls;	
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