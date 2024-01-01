#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n,k,q,x;
	cin >> n >> k >> q;

	int cnt = 0;
	vector<int> v;

	for(int i=0; i<n; i++) {
		cin >> x;
		if(x<=q) cnt++;
		else{
			if(cnt) v.push_back(cnt);
			cnt = 0;
		}
	}

	if(cnt) v.push_back(cnt);

	int res = 0;
	for(auto c : v) {
		int times = c-k + 1;
		res += times*(times+1)/2;
	}
	cout << res << endl;

}

int main() {
	
	int t;
	cin >> t;

	while(t--) {
		solve();
	}	
	
	return 0;
}