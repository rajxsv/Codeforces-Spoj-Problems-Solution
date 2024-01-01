#include<bits/stdc++.h>
using namespace std;

int main() {
	
	string str;
	cin >> str;
	int n = str.size();
	stack<char> s;

	for(int i=0; i<n; i++) {
		if(s.empty() || s.top() != str[i]) {
			s.push(str[i]);
		}else if(s.top() == str[i]) {
			s.pop();
		}
	}	
	string ans;

	if(s.empty()) {
		ans = "Yes";
	}else{
		ans = "No";
	}

	cout << ans << endl;
	return 0;
}