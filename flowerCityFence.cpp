#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;

	vector<int> nums(n);

	for(int i=0; i<n; i++) {
		cin >> nums[i];
	}
	int times = 1;
	for(int i=0; i<n; i++) {
		int index = nums[i] - 1;
		if(index > n-1 || nums[index] - times < 0) {
			cout << "No" << endl;
			return;
		}
		times++;
	}
	cout << "Yes" <<endl;
}

int main() {
	
	int t;
	cin >> t;

	while(t--) {
		solve();
	}	
	
	return 0;
}