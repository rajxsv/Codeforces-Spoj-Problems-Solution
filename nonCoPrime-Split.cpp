#include<bits/stdc++.h>
using namespace std;

int isPrime(int n) {
	int res = -1;
	for(int i=2; i<= sqrt(n); i++) {
		if(n%i == 0) {
			res = i;
			return res;
		}
	}
	return -1;
}

void solve() {
	int a,b;
	cin >> a >> b;

	if(b-a > 0) {
		if(b&1)b--;

		if((b/2) == 1) cout << -1 << endl;
		else cout << b/2 << " " << b/2 << endl;
	}else {
		int div = isPrime(a);
		if(div == -1) {
			cout << -1 << endl;
		}else {
			cout << a-div << " " << div << endl;
		}
	}
}

int main() {
	
	int t;
	cin >> t;

	while(t--) {
		solve();
	}	
	
	return 0;
}