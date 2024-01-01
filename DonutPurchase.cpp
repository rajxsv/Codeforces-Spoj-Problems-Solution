#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int t,first,second;
	long long a,b,c;
	cin >> t;

	while(t--) {
		cin >> a >> b >> c;
		first = second = -1;

		if(a < c) {
			first = 1;
		}

		if(c/b < a) {
			second = b;
		}

		cout << first << " " << second << endl;
	}	
	
	return 0;
}