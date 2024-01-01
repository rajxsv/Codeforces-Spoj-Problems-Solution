#include<bits/stdc++.h>
using namespace std;

void solve() {
	long long a,b;
	cin >> a >> b;

	if(a*2 <= b) {
		cout << a << " " << 2*a << endl;
	}else {
		cout << -1 << " " << -1 << endl;
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