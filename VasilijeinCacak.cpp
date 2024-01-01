#include<bits/stdc++.h>
using namespace std;

void solve() {
	long long n,k,x;
	cin >> n >> k >> x;

	long long mins = k*(k+1)/2;
	long long tots = n*(n+1)/2;
	long long lastk = (n-k)*(n-k+1)/2;   // 1 2 3 4 5 6 7 8 9 10
	long long maxs = tots - lastk;

	if(x>=mins && x<=maxs) cout << "YES" << endl;
	else cout << "NO" << endl;

	return;
}

int main() {
	
	long long unsigned t;
	cin >> t;

	while(t--) {
		solve();
	}	
	
	return 0;
}