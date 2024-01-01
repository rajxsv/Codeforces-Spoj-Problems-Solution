#include<bits/stdc++.h>
using namespace std;
int res = 0;
int node = -1;

void dfs(int src, vector<vector<int>> &adj, vector<int> &path, int dist) {
	path[src] = 1;

	if(dist > res) {
		res = dist;
		node = src;
	}

	for(auto nbr: adj[src]) {
		if(path[nbr] == 0) {
			dfs(nbr,adj,path,dist+1);	
		}
	}

	return;
}

int main() {
	
	int n,u,v;
	cin >> n;

	vector<vector<int>> adj;
	adj.resize(n+1);
	vector<int> path(n+1,0);

	for(int i=0; i<n-1; i++) {
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}	

	if(n==1){ 
		cout << 0 << endl;
		return 0;
	}

	if(n==1){
 		cout << 0 << endl;
		return 0;
	}

	dfs(1, adj, path, 0);

	for(int i=0; i<=n; i++) path[i] = 0;
	
	dfs(node, adj, path, 0);

	cout << 3*res << endl;
	
	return 0;
}