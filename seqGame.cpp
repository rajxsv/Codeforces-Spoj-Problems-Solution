#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;

	vector<int> nums(n);
	vector<int> res;
	
	for(int i=0; i<n; i++) {
		cin >> nums[i];
	}
	res.push_back(nums[0]);

	for(int i=1; i<n; i++) {
		if(nums[i] >= nums[i-1]) {
			res.push_back(nums[i]);
		}else{
			res.push_back(1);
			res.push_back(nums[i]);
		}
	}

	cout << res.size() << endl;
	for(auto i : res) cout << i << " ";
	cout <<endl;
}

int main() {
	
	int t;
	cin >> t;

	while(t--) {
		solve();
	}	
	
	return 0;
}