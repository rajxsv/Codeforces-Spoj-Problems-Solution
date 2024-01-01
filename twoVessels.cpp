#include<bits/stdc++.h>
using namespace std;

void solve() {
	int a,b,c;
	cin >> a >> b >> c;

	double diff = abs(a-b);
	
	cout << ceil((diff/((double)2*(double)c))) << endl;
}

int main() {
	
	int t;
	cin >> t;

	while(t--) {
		solve();
	}	
	
	return 0;
}