#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin >> n;
	vector<int> nums(n);

	for(int i=0;i<n;i++) {
		cin >> nums[i];
	}
	int bal = -1; // represents the status of balance

	for(int i=0; i<n; i++) {
		if(nums[i]%2 == 0) {
			cout << nums[i]/2 << endl;
			continue;
		}

		double no = (double)nums[i]/2;

		if(bal == -1) {
			cout << ceil(no) << endl;
			bal = 1;
		}else {
			cout << floor(no) << endl;
			bal = -1;
		}

	}
	
	return 0;
}