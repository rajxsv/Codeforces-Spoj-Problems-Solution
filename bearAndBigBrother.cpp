#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int l,b;
	cin >> l >> b;	
	vector<vector<int>> a;
	int years = 0;
	while(l<=b) {
		l *= 3;
		b *= 2;

		// cout << l << " " << b << endl;

		years++;
	}

	cout << years << endl;
	
	return 0;
}