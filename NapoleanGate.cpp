#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> dp(n);

	for(int i=0; i<n; i++) {
		cin >> dp[i];
	}

	for(int i=n-1; i>=1; i--) {
		dp[i-1] = max(dp[i]-1,dp[i-1]);
	}

	for(int i=0; i<n; i++) {
		if(dp[i]>0) {
			cout << 1 << " ";
		}else{
			cout << 0 << " ";
		}
	}
	cout << endl;
}

int main() {
	
	int t;
	cin >> t;

	while(t--) {
		solve();
	}	
	
	return 0;
}