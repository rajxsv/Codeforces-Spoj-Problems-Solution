#include<bits/stdc++.h>
using namespace std;

void solve() {
	vector<int> v(3);
	cin >> v[0] >> v[1] >> v[2];

	sort(v.begin(), v.end());

	int mini = v[0];
	int op = 0;

	for(int i=1; i<3; i++) {
		if(v[i]%mini==0) {
			if(v[i]/mini) op += (v[i]/mini) - 1;
		}else{
			cout << "No" << endl;
			return;
		}
	}

	if(op <= 3) {
		cout << "Yes" << endl;
		return;
	}

	cout << "No" << endl;
}

int main() {
	
	int t;
	cin >> t;

	while(t--) {
		solve();
	}	
	
	return 0;
}