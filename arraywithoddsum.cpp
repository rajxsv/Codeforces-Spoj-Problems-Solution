#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;


	int odd = 0;
	int even = 0;
	int x;

	for(int i=0; i<n; i++) {
		cin >> x;

		if(x&1) odd++;
		else even++;
	}

	if(odd&1 || (odd>0 && even>0)) cout << "YES" <<endl;
	else cout << "NO" << endl;
}

int main() {
	
	int t;
	cin >> t;

	while(t--) {
		solve();
	}	
	
	return 0;
}