#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> v(n);
	int zero = false;
	int mn = INT_MAX;

	for(int i = 0; i<n; i++) {
		cin >> v[i];
		if(v[i] == 0) zero++;
		mn = min(mn,v[i]);
	}

	if(zero > 1) {
		cout << 0 << endl;
	}else{
		int res = 1;
		for(int i=0; i<n; i++) {
			if(v[i] == mn) {
				res *= (v[i] + 1);
				mn = -1;
			}else{
				res *= v[i];
			}
		}
		cout << res << endl;
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