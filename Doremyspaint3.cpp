#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n,x;
	cin >> n;

	unordered_map<int,int> um;
	for(int i=0; i<n; i++) {
		cin >> x;
		um[x]++;
	}
	if(um.size() > 2) {
		cout << "No" << endl;
	}else if(um.size() == 1){
		cout << "Yes" << endl;
	}else{
		vector<int> v;
		for(auto p:um) {
			v.push_back(p.first);
		}

		if(abs(um[v[0]]-um[v[1]]) <= 1) {
			cout << "Yes" << endl;
		}else{
			cout << "No" << endl;
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