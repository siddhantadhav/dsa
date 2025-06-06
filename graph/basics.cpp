#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif

	/*
	Input
	n, m -> nodes and edges
	5, 6
	
	m lines will represent edges
	
	2 1
	1 3
	2 4
	3 4
	2 5
	4 5
	
	Two ways to store
	1. Matrix (Adj Matrix)
	2. List
	*/

	int n, m;
	cin >> n >> m;

	/*
	Adj Matrix
		O(N^2) Space complexity
		O(M) Time complexity to store the graphs
	*/

	vector<vector<int>> adjMatrix(m, vector<int>(m, 0));

	for(int i=0; i<m; i++){
		int u, v;
		cin >> u >> v;
		adjMatrix[u][v] = 1;
		adjMatrix[v][u] = 1; // for undirected only	
	}

	/*
	Adj List
		O(2M) Space Complexity
		O(M)
	*/

	vector<vector<int>> adjList(n+1);

	for(int i=0; i<m; i++){
		int u, v;
		cin >> u, v;
		adjList[u].push_back(v);
		adjList[v].push_back(u);
	}

	/*
	for weighted graphs
	in matrix you add weight instead of 1
	in list you store pair with neighbouring nodes with thier wieght
	
	vector<vector<pair<int, int>>>
	*/



    return 0;
}