#include<bits/stdc++.h>
using namespace std;

void solve() {
	string s;
	cin >> s;

	s = "0" + s;
	int point = s.size();

	for(int i=s.size()-1; i>0; i--) {
		if(s[i] >= '5') {
			s[i-1]++;
			point = i;
		}
	}

	// cout << "-> " << s << endl;

	for(int i=0; i<s.size(); i++) {
		if(i == 0 && s[i] == '0') {
			continue;
		}

		if(i>=point) cout << '0';
		else cout << s[i];
	}

	cout << endl;
}

int main() {
	
	int t;
	cin >> t;

	while(t--) {
		solve();
	}	
	
	return 0;
}