#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	long long maxi = INT_MAX;
	long long sum = 0;
	cin >> n;

	vector<long long> v(n);

	for (int i = 0; i < n; ++i){
		cin >> v[i];
	}	

	for(int i=n-1; i>=0; i--) {
		if(v[i] < maxi) {
			sum += v[i];
			maxi = v[i];
		}else {
			if(maxi - 1 != 0) {
				sum += (maxi - 1);
				maxi--;
			}else{
				break;
			}
		}
	}

	cout << sum << endl;
	
	return 0;
}