#include <bits/stdc++.h>

using namespace std;

// brute force
int findContentChildren(vector<int> &g, vector<int> &s){
	sort(g.begin(), g.end());
	sort(s.begin(), s.end());

	int contentChildren =0;
	int cookieIndex = 0;

	while(cookieIndex < s.size() && contentChildren < g.size()){
		if(s[cookieIndex] >= g[contentChildren]) contentChildren++;
		cookieIndex++;
	}

	return contentChildren;
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