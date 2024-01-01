#include<bits/stdc++.h>
using namespace std;

unsigned long long fun(unsigned long long n) {
	unsigned long long k = 4;
	if(n%k == 0) {
		return n;
	}
	if(n%k == 1) return 1;
	if(n%k == 2) return n+1;

	return 0;
}

int main() {
	
	unsigned long long n,k;

	cin >> n >> k;
	unsigned long long ans = 0;
	unsigned long long done[n+1][n+1]; 
	memset(done, 0, sizeof(done));


	for(unsigned long long i=k; i<=n; i++) {
		unsigned long long left = max(i-k,(unsigned long long)0);
		unsigned long long right = i;

		while(left <= right && done[left][right] == 0) {
			unsigned long long leftPrime = fun(left);
			unsigned long long rightPrime = fun(right);
			ans = max(ans, leftPrime^rightPrime);
			done[left][right]=1;
			left++;
		}
	}

	cout << ans << endl;

	return 0;
}