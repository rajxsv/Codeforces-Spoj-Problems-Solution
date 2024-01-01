#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin >> n;

	vector<int> v(n);
	for(int i=0; i<n; i++) cin >> v[i];

	int len = 1;
	int ans = 1;
	int prev = v[0];

	for(int i=1; i<n; i++) {
		if(v[i] > prev) {
			len++;
		}else{
			len = 1;
		}
		prev = v[i];
		ans = max(len,ans);
	}

	cout << ans << endl;
	
	return 0;
}