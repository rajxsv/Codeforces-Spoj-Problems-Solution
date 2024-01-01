#include<bits/stdc++.h>
using namespace std;

int di[2] = {0,1};
int dj[2] = {1,0};

long long bfs(vector<vector<int>> &mat, int i, int j, int n, int m, long long xori, long long k, unordered_map<string,int> &dp) {
	if(i == n-1 && j == m-1) {
		return (xori^mat[i][j]) == k;
	}
	string key = to_string(i) + to_string(j) + to_string(xori);
	if(dp.find(key) != dp.end()) {
		return dp[key];
	}

	if(i<0 || j<0 || i>=n || j>=m) {
		return 0;
	}

	xori ^= mat[i][j];

	return dp[key] = bfs(mat,i+1,j,n,m,xori,k,dp) + bfs(mat,i,j+1,n,m,xori,k,dp);
}

void solve() {
	int n,m;
	long long k;
	cin >> n >> m >> k;
	vector<vector<int>> mat(n, vector<int>(m,0));
	unordered_map<string,int> dp;

	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cin >> mat[i][j];
		}
	}

	int res = bfs(mat, 0, 0, n, m, (long long)0, k, dp);
	cout << res << endl;
}

int main() {
	
	solve();	
	
	return 0;
}