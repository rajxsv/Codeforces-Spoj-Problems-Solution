#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int k,n,w;
	cin >> k >> n >> w;

	int amount = (k*w*(w+1))/2;

	int ans = amount > n ? amount - n : 0;

	cout << ans <<endl;

	
	return 0;
}