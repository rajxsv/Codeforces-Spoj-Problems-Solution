#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;

	string s;
	cin >> s;

	char last = s[0];

	cout << last;


	for(int i=1; i<n-1; i++) {
		if(s[i] != last) {
			continue;
		}else{
			last = s[i+1];
			i++;
			cout << last;
		}
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