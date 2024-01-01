#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;

	vector<int> nums(n);
	vector<int> sorted(n);

	for(int i=0; i<n; i++) {
		cin >> nums[i];
		sorted[i] = nums[i];
	}

	sort(sorted.begin(), sorted.end());

	for(int i=0; i<n; i++) {
		if((sorted[i]&1) != (nums[i]&1)) {
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