#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int row,col;

	cin >> row >> col;

	string s = "";
	string dot = "";

	while(col--) {
		s += "#";
		dot +=".";
	}	

	dot.pop_back();

	int flag = true;
	// flag true for left , else eight 

	for(int i=0;i<row;i++) {
		if(i%2 == 0) {
			cout << s << endl;
			flag = !flag;
		}else{
			if(flag) {
				cout << "#" << dot << endl;
			}else{
				cout << dot << "#" << endl;
			}
		}
	}
	
	return 0;
}