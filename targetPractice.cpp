#include<bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>> &grid) {
	char x;
	int ans = 0;
	
	for(int i=0; i<10; i++) {
		for(int j=0; j<10; j++) {
			cin >> x;

			if(x=='X') {
				ans += grid[i][j];
			}
		}
	}

	cout << ans << endl;
}

int main() {
	
	int t;
	cin >> t;
	vector<vector<int>> matrix = {	
		{1,1,1,1,1,1,1,1,1,1},
		{1,2,2,2,2,2,2,2,2,1},
		{1,2,3,3,3,3,3,3,2,1},
		{1,2,3,4,4,4,4,3,2,1},
		{1,2,3,4,5,5,4,3,2,1},
		{1,2,3,4,5,5,4,3,2,1},
		{1,2,3,4,4,4,4,3,2,1},
		{1,2,3,3,3,3,3,3,2,1},
		{1,2,2,2,2,2,2,2,2,1},
		{1,1,1,1,1,1,1,1,1,1}
	};

	while(t--) {
		solve(matrix);
	}	
	
	return 0;
}