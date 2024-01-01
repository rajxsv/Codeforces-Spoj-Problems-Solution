#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n,odd,x;
	cin >> n;

	odd = 0;

	for(int i=0; i<n; i++) {
		cin >> x;
		if(x&1)odd++;
	}

	if(odd&1) {
		cout << "No" <<endl;
	}else{
		cout << "Yes" << endl;
	}
}

int main() {
	
	int t;
	cin >> t;

	while(t--) {
		solve();
	}	
	
	return 0;
}