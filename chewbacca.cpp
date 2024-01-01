#include<bits/stdc++.h>
using namespace std;

int main() {
	
	string s;
	cin >> s;

	if(s[0] >= '5' && (9 - int(s[0]-'0')) + '0' != '0') {
		s[0] = (9 - int(s[0]-'0')) + '0';
	}		

	for(int i=1;i<s.length();i++) {
		if(s[i] >= '5') {
			s[i] = (9 - int(s[i]-'0')) + '0';
		}
	}

	cout << s << endl;
	
	return 0;
}