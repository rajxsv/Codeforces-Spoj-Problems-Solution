#include<bits/stdc++.h>
using namespace std;

void solve() {
	long long n,k;
	cin >> n >> k;

	if(k>30) {
		cout << n + 1 << endl;
	}else{
		cout << min(n,(long long)(pow(2,k)-1)) + 1 << endl;
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