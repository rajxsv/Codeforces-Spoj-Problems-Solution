#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin >> n;

	int ans = 1;

	for(int i=n;i>=2;i--) {
		ans += i*(n+1-i);
	}

	cout << ans <<endl;

	return 0;
}