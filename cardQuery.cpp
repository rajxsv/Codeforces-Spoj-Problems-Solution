#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int n,q;
	cin >> n >> q;

	map<int,map<int,int>> um;
	map<int,map<int,int>> um2;


	while(q--) {
		int type;
		cin >> type;

		if(type == 1) {
			int i,j;
			cin >> i >> j;
			
			um[i][j] = 1;
			um2[j][i]++;

		}else if(type == 3) {
			int i;
			cin >> i;

			for(auto ele:um[i]) {
				cout << ele.first << " ";
			}			

			cout << endl;

		}else{
			int i;
			cin >> i;

			for(auto ele:um2[i]) {
				int times = ele.second;
				while(times--) {
					cout << ele.first << " ";
				}	
			}

			cout << endl;
		}
	}

	
	return 0;
}