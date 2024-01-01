#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;

	string s;
	cin >> s;

	unordered_map<string,int> um;

	for(int i=0; i<n-1; i++) {
		um[s.substr(i,2)] = 1;
	}

	cout << um.size() << endl;
}

int main() {
	
	int t;
	cin >> t;

	while(t--) {
		solve();
	}	
	
	return 0;
}