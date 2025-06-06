#include <bits/stdc++.h>

using namespace std;

int findCircleNum(vector<vector<int>>& isConnected) {
	int n = isConnected.size();
	vector<int> visited(n, 0);
	int provinces = 0;

	for(int i=0; i<n; i++){
		if(!visited[i]) {
			queue<int> q;
			q.push(i);
			visited[i] = 1;

			while(!q.empty()){
				int node = q.front();
				q.pop();

				for(int j=0; j<n; j++){
					if(isConnected[node][j] == 1 && !visited[j]){
						visited[j] = 1;
						q.push(j);
					}
				}
			}
			provinces++;	
		}
	}

	return provinces;
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