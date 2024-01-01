#include<bits/stdc++.h>
using namespace std;

int main() {
	
	string s;
	cin >> s;

	string no = "";

	for(int i=0; i<s.size(); i+=2) no += s[i];

	sort(no.begin(), no.end());
	
	cout << no[0];
	for(int i=1; i<no.size(); i++) {
		cout << "+" << no[i];
	}	 
	
	return 0;
}