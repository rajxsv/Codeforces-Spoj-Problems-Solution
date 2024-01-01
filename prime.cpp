#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
	if(num == 2) return true;
	if(num < 2 || num%2 == 0) return false;
	for(int i=3; i*i <= num; i += 2) {
		if(num % i == 0) {
			return false;
		}
	}

	return true;
}

void solve() {
	int a,b;
	cin >> a >> b;

	for(int j=a; j<=b; j++) {
		if(isPrime(j)) {
			cout << j << endl;
		}
	}
}

int main() {
	
	int t;
	cin >> t;


	while(t--) {
		solve();
		cout << endl;
	}	
	
	return 0;
}
