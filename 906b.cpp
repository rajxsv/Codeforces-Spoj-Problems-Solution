#include<bits/stdc++.h>
using namespace std;

bool check(string &s) {
	for(int i=1; i<s.size(); i++) {
		if(s[i] == s[i-1]) {
			return false;
		}
	}
	return true;
}

void solve() {
	int n,m;
	string s,t;
	cin >> n >> m;
	cin >> s >> t;

	bool afs = false;
	bool aft = false;

	afs = check(s);
	aft = check(t);

	if(afs) {
		cout << "Yes" << endl;
	}else if(!afs && !aft) {
		cout << "No" << endl;
	}else{
		char first = t[0];
		char last = t[m-1];
		bool res = true;

		for(int i=1; i<n; i++) {
			if(s[i] == s[i-1]) {
				if((s[i] == '0' && first == '1' && last == '1') || (s[i] == '1' && first == '0' && last == '0')) {
					continue;
				}else{
					cout << "No" << endl;
					res = false;
					break;
				}
			}
		}

		if(res) {
			cout << "Yes" << endl;
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