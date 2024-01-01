#include<bits/stdc++.h>
using namespace std;

void solve() {
	int mask = 0;
	string pat = "vika";
	string s;

	int row,col;
	char x;
	cin >> row >> col;

	vector<vector<int>> pos(4,vector<int>(col,0));

	for(int i=0; i<row; i++) {
		for(int j=0; j<col; j++) {
			cin >> x;
			for(int k=0; k<4; k++) {
				if(x == pat[k]) {
					pos[k][j] = 1;
				}
			}
		}
	}
	int prev = INT_MAX;

	// for(int i=0; i<4; i++) {
	// 	for(int j=0; j<col; j++) {
	// 		cout << pos[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }

	for(int i=3; i>=0; i--) {
		bool found = false;
		for(int j=col-1; j>=0; j--) {
			if(pos[i][j]==1 && j<prev) {
				prev = j;
				found = true;
				break;
			}
		}
		if(!found) {
			cout << "No" << endl;
			return;
		}
	}

	cout << "Yes" << endl;

}

int main() {
	
	int t;
	cin >> t;

	while(t--) {
		solve();
	}	
	
	return 0;
}