#include<bits/stdc++.h>
using namespace std;

#define ll long long 

int main() {
	
	ll n,kk;
	cin >> n >> kk;	
	
	ll ans = 0;
	ll mask = 1;

	if(kk==1) {
		cout << n << endl;
		return 0;
	}

	while(mask <= n) {
		mask <<= 1;
	}

	cout << mask - 1 << endl;

	return 0;
}