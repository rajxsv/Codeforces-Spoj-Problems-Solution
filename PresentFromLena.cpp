#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin >> n;

	int lines = (2*n) + 1;	
		
	for(int i=0;i<lines;i++) {

		for(int s=0;s< 2*abs(n-i) ;s++) cout << " ";

		if(i==0 || i==lines-1) cout << 0 << endl;
		else{
			cout << 0 << " ";

			int inc = n-1 - abs(n-i);
			int dec = inc;

			for(int no = 0; no<inc; no++) {
				cout << no+1 << " ";
			}
			cout << inc+1 << " ";
			for(int no=dec-1; no>=0; no--) {
				cout << no+1 << " ";
			}
			cout << 0 << endl;
		}

	}

	return 0;
}