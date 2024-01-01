#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	string s;
	cin >> t;

	while(t--) {
		cin >> s;
		int m = 1;
		vector<int> res;

		for(int i=s.size()-1; i>=0; i--,m*=10) {
			if(s[i] == '0') continue;

			res.push_back(((int(s[i]-'0'))*m));
		}

		cout << res.size() << endl;

		for(auto i: res) {
			cout << i << " ";
		}

		cout << endl;

	}

	
	return 0;
}