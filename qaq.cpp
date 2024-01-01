#include<bits/stdc++.h>
using namespace std;

// int solve(string &s, string &t, int i, int j, vector<vector<int>> &dp) {
// 	if(j >= 3) {
// 		return 1;
// 	}
// 	if(i >= s.size()) {
// 		return 0;
// 	}

// 	if(dp[i][j] != -1) return dp[i][j];

// 	int ans = 0;

// 	if(s[i] == t[j]) {
// 		ans += solve(s,t,i+1,j+1,dp);
// 	}

// 	ans += solve(s,t,i+1,j,dp);
	
// 	return dp[i][j] = ans;
// }

int main() {
	
	string s;
	cin >> s;

	int n = s.size();
	string t = "QAQ";
	int m = 3;

	vector<vector<int>> dp(n+1, vector<int>(4,0));

	for(int i=0; i<=n; i++) {
		dp[i][3] = 1;
	}

	for(int i=n-1; i>=0; i--) {
		for(int j=2; j>=0; j--) {
			int ans = 0;

			if(s[i] == t[j]) {
				ans += dp[i+1][j+1];
			}

			ans += dp[i+1][j];
			
			dp[i][j] = ans;
		}
	}

	cout << dp[0][0] << endl;
	
	return 0;
}