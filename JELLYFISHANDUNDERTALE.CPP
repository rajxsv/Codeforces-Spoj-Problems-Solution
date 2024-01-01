#include<bits/stdc++.h>
using namespace std;

void solve() {
	long long a,b,n;
	cin >> a >> b >> n;

	vector<long long> v(n);

	for(long long i=0; i<n; i++) cin >> v[i];
	// sort(v.begin(), v.end());
	long long count = b;

	for(long long i=0; i<n; i++) {
		count += min(a,v[i]+1) - 1;
	}

	cout << count << endl;

}

int main() {
	
	int t;
	cin >> t;

	while(t--) {
		solve();
	}	
	
	return 0;
}