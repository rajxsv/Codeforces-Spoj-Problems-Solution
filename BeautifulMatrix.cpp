#include<bits/stdc++.h>
using namespace std;

int main() {
	bool found = false;
	int i=1,j=1,x;
	
	for(;i<=5;i++) {
		j=1;
		for(;j<=5;j++) {
			cin >> x;
			// cout << x << " ";
			if(x == 1) {
				found = true;
				break;
			}
		}

		// cout << endl;
		if(found) break;
	}	
	
	cout << abs(3-i) + abs(3-j) << endl;

	return 0;
}