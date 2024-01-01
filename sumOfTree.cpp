#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;

	if(n <= 9) {
		if(n<7) {
			cout << "No" << endl;
		}else {
			if(n==9) cout << "No" << endl;
			else {
				cout << "Yes" << endl;
				cout << n-3 << " 1 2" << endl;
			}
		}
	}else{
		if(n%3) {
			cout << "Yes" << endl;
			cout << n-3 << " 1 2" << endl;
		}else{
			cout << "Yes" << endl;
			cout << 1 << " " << 4 << " " << n-5 << endl;
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