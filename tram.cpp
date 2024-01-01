#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin >> n;

	int dec,inc;
	int res = INT_MIN, ans = 0;

	while(n--) {
		cin >> dec >> inc;
		ans -= dec;
		ans += inc;

		res = max(res,ans);
	}

	cout << res << endl;

	
	return 0;
}