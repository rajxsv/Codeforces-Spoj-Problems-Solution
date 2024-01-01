#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin >> n;

	string res = "";

	while(n>0 && n%7) {
		n-=4;
		res += "4";
	}	
	while(n>0 && n%7 == 0) {
		n -= 7;
		res += "7";
	}

	if(n!=0) {
		cout << -1;
	}else{
		cout << res;
	}

	return 0;
}