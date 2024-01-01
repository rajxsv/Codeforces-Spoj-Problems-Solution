#include<bits/stdc++.h>
using namespace std;

int valid(string &s) {
	// cout << s << endl;
	int n = s.size();
	for(int i=0; i<n; i++) {
		if(s[i] == s[n-i-1]) {
			return 0;
		}
	}
	return 1;
}

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;

	string oldS = "";
	int i = 0;
	int j = n-1;
	vector<int> op;
	int leftShred = 0;
	int times = 300;

	while(i < j && times--) {
		if(s[i] != s[j]) {
			i++;j--;
			continue;
		}else{
			if(s[0] == '0') {
				s = s + "0";
				op.push_back(j+1+leftShred);
			 	s.erase(0, 1);
			}else{
				s = "0" + s;
				op.push_back(i+1);
				s.pop_back();
			}
			leftShred++;
			
		}
	}
	if(valid(s)) {
		cout << op.size() << endl;
		for(auto ele : op) {
			cout << ele << " ";
		}
		cout << endl;
		return;
	}

	cout << -1 << endl;
	
}

int main() {
	
	int t;
	cin >> t;

	while(t--) {
		solve();
	}	
	
	return 0;
}