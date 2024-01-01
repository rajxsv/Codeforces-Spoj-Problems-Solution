#include<bits/stdc++.h>
using namespace std;

#define ll long long

int gcd(int a, int b) {
	if(b==0) {
		return a;
	}

	return gcd(b,a%b);
}

bool isPowerofTwo(int num) {
	return __builtin_popcount(num) <= 1;
}

void solve() {
	ll n,m;

	cin >> n >> m;
	int g = gcd(n,m);
	ll ans = 0;
	bool flag = isPowerofTwo(m/g);

	// cout << g << endl;

	if(flag == false) {
		ans = -1;
	} else {
		while(n) {
			if(n>=m) {
				n %= m;
			}else{
				ans += n;
				n*=2;
			}
		}
	}

	cout << ans << endl;
	return;
}

int main() {
	
	int t;
	cin >> t;

	while(t--) {
		// cout << gcd(10,5) << endl;
		solve();
	}	
	
	return 0;
}