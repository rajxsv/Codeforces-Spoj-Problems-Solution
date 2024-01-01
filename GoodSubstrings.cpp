#include<bits/stdc++.h>
using namespace std;

void solve() {
	string str, bad;
	cin >> str >> bad;
	int k,n;
	cin >> k;
	n = str.size();
	set<pair<int,int>> st;

	for(int i=0; i<n; i++) {
		int hash1 = 0, hash2 =0;
		int p1 = 31, p2 = 47;
		int badCount = 0;
		int mod = 1e9 + 7;

		for(int j=i; j<n; j++) {
			badCount += bad[str[j]-'a'] == '1' ? 0 : 1;
			if(badCount > k) break;

			hash1 = (hash1 + p1*(str[j]-'a'+1))%mod;
			hash2 = (hash2 + p2*(str[j]-'a'+1))%mod;

			// cout << hash1 << hash2 << endl;

			st.insert({hash1,hash2});
			p1 = (p1*31)%mod;
			p2 = (p2*47)%mod;
		}
	}

	cout << st.size() << endl;
}

int main() {
	
	solve();	
	
	return 0;
}