#include<bits/stdc++.h>
using namespace std;

void solve() {
	double n,x;
	cin >> n >> x;
	vector<vector<int>> hi;
	if(n<=2) {
		cout << 1 << endl;
		return; 
	}

	cout << ceil((n-2)/x)+1 << endl;

}

int main() {
	
	int t;
	cin >> t;

	while(t--) {
		solve();
	}	
	
	return 0;
}