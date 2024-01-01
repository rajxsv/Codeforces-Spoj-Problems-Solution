#include<bits/stdc++.h>
using namespace std;

int dfs(int src, unordered_map<int,vector<int>> &adj,vector<int> &dp) {
	int cnt = 0;
	if(dp[src] != -1) return dp[src];
	for(auto nbr:adj[src]) {
		cnt += 1 + dfs(nbr, adj, dp);
	}
	return dp[src] = cnt;
}

void solve() {
	int n;
	cin >> n;

	vector<int> v(n);
	unordered_map<int,vector<int>> adj;
	int emp = 2;
	vector<int> dp(n+1,-1);

	for(int i=0; i<n; i++) {
		cin >> v[i];
		adj[v[i]].push_back(emp);
		emp++;
	}

	int cnt = 0;

	for(int i=1; i<=n; i++) {
		cnt = 0;
		if(adj.find(i) != adj.end()) {
			cnt += dfs(i,adj,dp);
			cout << cnt << " ";
		}
	}

}

int main() {
	solve();
	
	return 0;
}