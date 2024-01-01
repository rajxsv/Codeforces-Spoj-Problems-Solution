#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n,mm,k,x;

	cin >> n >> mm >> k;

	long long ans = 0;
	int mx = INT_MIN, mn=INT_MAX;

	vector<multiset<int>> m(2);

	for(int i=0; i<n; i++) {
		cin >> x;
		m[0].insert(x);
		mx = max(x,mx);
		mn = min(x,mn);
	}

	for(int i=0; i<mm; i++) {
		cin >> x;
		m[1].insert(x);
		mx = max(mx,x);
		mn = min(mn,x);
	}

	int turn = 0;

	while(k>0) {
		int small = *m[turn].begin();
		int big = *m[turn^1].rbegin();

		if(small == mn && big == mx) {
			k &= 1;
			if(k==0) break;
		} 

		if(small < big) {
			m[turn].erase(m[turn].find(small));
			m[turn^1].erase(m[turn^1].find(big));

			m[turn].insert(big);
			m[turn^1].insert(small);
		}
		k--;
		turn ^= 1;
	}

	for(auto i : m[0]) {
		ans += i;
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