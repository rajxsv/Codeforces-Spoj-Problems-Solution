#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	string s;

	cin >> t;
	int ans = 0;

	while(t--) {
		cin >> s;
		if(s[1] == '+') {
			ans++;
		}else{
			ans--;
		}
	}

	cout << ans << endl;

	return 0;
}