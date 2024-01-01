#include<bits/stdc++.h>
using namespace std;

int main() {
	
	long long n,k;
	cin >> n >> k;

	vector<long long> nums(n);
	vector<long long> zero(n);
	vector<long long> cSum(n);

	long long sum1 = 0;

	for(long long i=0; i<n; i++) cin >> nums[i];

	for(long long i=0; i<n; i++){
		cin >> zero[i]; 
		if(zero[i]) {
			sum1 += nums[i];
			nums[i] = 0;
		}
	}

	cSum[0] = nums[0];

	for(int i=1; i<n; i++) {
		cSum[i] = cSum[i-1] + nums[i];
	}

	long long sum2 = cSum[k-1];

	for(int i=k; i<n; i++) {
		sum2 = max(sum2, cSum[i] - cSum[i-k]);
	}

	cout << sum1 + sum2 << endl;
	
	return 0;
}