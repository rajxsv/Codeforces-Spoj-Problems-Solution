#include<bits/stdc++.h>
using namespace std;

void solve() {
	string str;
	cin >> str;

	long long nb, pb, ns, ps, nc, pc;
	long long r;
	cin >> nb >> ns >> nc;
	cin >> pb >> ps >> pc;
	cin >> r;

	int b=0,s=0,c=0;

	for(auto i:str) {
		if(i == 'B') b++;
		else if(i == 'S')s++;
		else c++;
	}

	long long low = 0;
	long long high = r;
	long long res = 0;

	while(low <= high) {
		long long mid = low + ((high - low) / 2);

		long long qb = max(mid*b - nb, (long long)0);
		long long qs = max(mid*s - ns, (long long)0);
		long long qc = max(mid*c - nc, (long long)0);

		long long cost = qb*pb + qs*ps + qc*pc;

		if(cost <= r) {
			res = mid;
			low = mid + 1;
		}else {
			high = mid - 1;
		}
	}

	cout << res << endl;

}

int main() {
	
	int t = 1;

	while(t--) {
		solve();
	}	
	
	return 0;
}