#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin >> n;

	int mini = INT_MAX, maxi = INT_MIN;

	vector<int> nums(n);	
	for(int i=0;i<n;i++){
		cin >> nums[i];

		mini = min(mini,nums[i]);
		maxi = max(maxi,nums[i]);
	}

	for(int i=0;i<n;i++) { if(maxi == nums[i]) {maxi = i; break;} };
	for(int i=n-1;i>=0;i--) { if(mini == nums[i]) {mini = i; break;} };

	int extra = maxi > mini ? 1 : 0;
	
	cout << maxi + (n-1 - mini) - extra;

	
	return 0;
}