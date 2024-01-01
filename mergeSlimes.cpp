#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int n,a,b;
	cin >> n;

	map<long long,long long> mp;

	for(int i=0; i<n; i++) {
		cin >> a >> b;
		mp[a] = b;
	}

	long long ans = 0;

	while(!mp.empty()) {
		auto p = *mp.begin();
		mp.erase(p.first);	

		if(p.second&1) ans++;

		if(p.second > 1) {
			mp[p.first*2] += p.second/2;
		}
	}

	cout << ans << endl;

	return 0;
}