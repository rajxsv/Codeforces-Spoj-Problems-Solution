#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin >> t;

	while(t--) {
		int a,b,n;

		cin >> a >> b >> n;
		int flag = 1; // 1 means a's turn to add

		if(b<a) {
			swap(a,b); // a is always smaller
		}

		int times = 0;

		while(a<=n && b<= n) {
			if(flag == 1) {
				a += b;
				flag = 2;
			}else{
				b += a;
				flag = 1;
			}
			times++;
		}
		cout << times <<endl;
	}	
	
	return 0;
}