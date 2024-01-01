#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n,k;
	cin >> n >> k;

	vector<int> f(n);
	vector<int> h(n);

	for(int i=0; i<n; i++) cin >> f[i];
	for(int i=0; i<n; i++) cin >> h[i];

	vector<int> dp(n);
	vector<int> cSum(n);

	cSum[0] = f[0];
	for(int i=1; i<n; i++) {
		cSum[i] = f[i] + cSum[i-1];
	}
	// cout << endl;

	for(int i=n-1; i>=0; i--) {
		if(i == n-1) {
			dp[i] = 1;
			continue;
		}

		if((h[i]%h[i+1]) == 0) {
			dp[i] = dp[i+1] + 1;
		} else {
			dp[i] = 1;
		}
	}

	int res = 0;
	int ans = 0;

	for(int i=0; i<n; i++) {
		int start = i;
		int end = i + dp[i] - 1;

		while(start <= end) {
			int mid = (start + end) / 2;
			int pot;

			if(i == 0) pot = cSum[mid];
			else pot = cSum[mid] - cSum[i-1]; 

			if(pot <= k && pot >= res) {
				res = pot;
				ans = max(ans,mid - i + 1);
				break;
			}else{
				end--;
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