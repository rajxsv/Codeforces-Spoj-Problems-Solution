#include<bits/stdc++.h>
using namespace std;

long long fill(vector<int> &v, long long h) {
	long long water = 0;
	for(auto i:v) {
		water += max((long long)0,h-i);
	}
	return water;
}

void solve() {
	long long n,x;
	cin >> n >> x;

	vector<int> v(n);

	for(long long i=0; i<n; i++) {
		cin >> v[i];
	}

	long long low = 1;
	long long high = 1e10;
	long long res = -1;

	while(low <= high) {
		long long h = low + ((high - low) / (long long)2);
		long long amountCanFill = fill(v,h);
		// cout << amountCanFill << " ";

		if(amountCanFill <= x) {
			res = h;
			low = h + 1;
		}else if(amountCanFill > x) {
			high = h - 1;
		}
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