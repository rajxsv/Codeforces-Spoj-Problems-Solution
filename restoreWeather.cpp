#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n,k;
	cin >> n >> k;

	vector<int> a(n),b(n),c;

	for(int i=0; i<n; i++) {
		cin >> a[i];
	}
	c = a;

	for(int i=0; i<n; i++) {
		cin >> b[i];
	}

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	unordered_map<int,vector<int>> mapping;

	for(int i=0; i<n; i++) {
		mapping[a[i]].push_back(b[i]);
	}		

	for(auto i : c){
		cout << *(mapping[i].rbegin()) << " ";
		mapping[i].pop_back();
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