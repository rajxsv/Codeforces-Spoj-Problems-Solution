#include<bits/stdc++.h>
using namespace std;

void solve() {
	int arr[3];
	cin >> arr[0] >> arr[1] >> arr[2];

	sort(arr,arr+3);  // can also use a small 3x(if) bubble sort 

	if(arr[1] == arr[2]) {
		cout << "YES" << endl;
		cout << arr[0] << " " << arr[0] << " " << arr[1] << endl; 
	}else{
		cout << "NO" << endl;
	}
}

int main() {
	
	int t;
	cin >> t;

	while(t--) {
		solve();
	}	
	
	return 0;
}