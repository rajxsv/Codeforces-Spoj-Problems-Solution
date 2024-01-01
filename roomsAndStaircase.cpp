#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin >> t;

	while(t--) {
		int n;
		cin >> n;
		
		string s;
		cin >> s;

		int left = -1;
		int right =-1;

		if(s[0] == '1' || s[n-1] == '1') {
			cout << 2*n << endl;
			continue;
		}

		for(int i=0; i<n; i++) {
			if(s[i] == '1') {
				left = max(left,i+1);
			}
		}

		for(int i=n-1; i>=0; i--) {
			if(s[i] == '1') {
				right = max(right, n - i);
			}
		}

		if(left==-1 && right==-1){
			cout << n << endl;
			continue;
		}

		cout << 2*max(left,right) << endl;
	}	
	
	return 0;
}