#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n,m,k,H,x;
	int cnt = 0;

	cin >> n >> m >> k >> H;

	for(int i=0; i<n; i++) {
		cin >> x;
		int diff = abs(H-x);
		if(diff != 0 && diff%k == 0 && diff/k <= m-1) {
			cnt++;
		}
	}

	cout << cnt << endl;

}

int main() {
	
	int t;
	cin >> t;

	while(t--) {
		solve();
	}	
	
	return 0;
}