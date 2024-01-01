#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	while(t--) {

		int n,m,D=0,R=0;
		char ch;
		cin >> n >> m;

		for(int i=0;i<n;i++) {
			for(int j=0;j<m;j++) {
				cin >> ch;
				
				if(ch=='C') continue;

				if(j == m-1) {
					if(ch == 'D') {
						D++;
					}
				}
				if(i == n-1) {
					if(ch == 'R') {
						R++;
					}
				}
			}
		}	
		cout << (n+m-2) - (D+R) << endl;

	}


	
	return 0;
}


// 0

// 1

// 1

// 0

// 8

// 7

// 5

// 6

// 7

// 10






