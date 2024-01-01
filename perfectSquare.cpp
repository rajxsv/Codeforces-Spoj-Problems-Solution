#include<bits/stdc++.h>
using namespace std;


void solve() {
	int n;
	cin >> n;

	vector<vector<char>> grid(n,vector<char>(n,'0'));
	vector<vector<char>> op;
	
	for(int i=0; i<n; i++) {	
		for(int j=0; j<n; j++) {
			cin >> grid[i][j];
		}
	}

	vector<int> tmp;
	int ans = 0;

	for(int i=0; i<(n/2) ;i++) {
		for(int j=0; j<(n/2); j++) {
			tmp.clear();

			tmp.push_back(grid[i][j]);
			tmp.push_back(grid[j][n-i-1]);
			tmp.push_back(grid[n-j-1][i]);
			tmp.push_back(grid[n-j-1][n-i-1]);

			sort(tmp.begin(),tmp.end());

			for(auto u:tmp) {
				ans += (tmp.back() - u);
			}
		}
	}

	cout << ans << endl;

}

int main() {
	
	int t;
	cin >> t;

	while(t--) {
		solve();
	}	
	
	return 0;
}