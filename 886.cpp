#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;

	vector<int> v(n);

	for(int i=0; i<n; i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.end());
	vector<int> dp(n+2);
	dp.push_back(1);

	for(int i=1; i<n; i++) {
		if(v[i] - v[i-1] > k) dp[i] = 1;
		else dp[i] = 0; 
	}

	dp[n] = 1;
	int last = 0;
	int ans = 0;

	for(int i=0; i<=n; i++) {
		if(dp[i] == 1) {
			ans = max(i - last, ans);
			last = i;
		}
	}

	cout << n - ans << endl;

}

int main() {
	
	int t;
	cin >> t;

	while(t--) {
		solve();
	}	
	
	return 0;
}