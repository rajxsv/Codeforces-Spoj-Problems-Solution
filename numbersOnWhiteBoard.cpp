#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int t,n;
	cin >> t;	
	
	while(t--) {
		cin >> n;
		int a = n;
		int b = n-1;

		cout << 2 << endl;

		for(int i=1;i<n;i++) {
			cout << a << " " << b << endl;
			
			a = (a+b+1)/2;
			b--;
		}
	}

	return 0;
}