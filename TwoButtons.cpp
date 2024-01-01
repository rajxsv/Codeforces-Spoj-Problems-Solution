#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n,m;
	cin >> n >> m;
	int ans = 0;

	while(n < m) {
		if(m%2 == 0) {
			m/=2;
		}else{
			m++;
		}
		ans++;
	}
	// cout << n << " " << m << endl;
	ans += (n-m);

	cout << ans << endl;
}

int main() {
	
	solve();	
	
	return 0;
}