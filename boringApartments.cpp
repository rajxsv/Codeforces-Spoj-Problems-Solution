#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin >> t;

	while(t--) {
		string s;
		cin >> s;

		int times = int(s[0] - '0') - 1;
		int ans = times*10;

		int extra = s.size();
		ans += extra*(extra+1)/2;

		cout << ans << endl;
	}	
	
	return 0;
}