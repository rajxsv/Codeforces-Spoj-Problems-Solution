#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n,k;
	cin >> n >> k;

	string s;
	cin >> s;

	int cb = 0;
	int op = 0;
	int streak = 0;
	bool streakOn = false;

	for(int i=0; i<n; i++) {
		if(s[i] == 'B') {
			cb++;
		}
	}

	for(int i=0; i<n && cb; i++){
		if(s[i] == 'B') {
			if(streakOn == false) {
				streak = 0;
				streakOn = true;
			}
			cb--;
		}
		streak++;
		if(streak == k && streakOn) {
			op++;
			streakOn=false;
		}
	}

	if(streakOn) op++;

	cout << op << endl;
}

int main() {
	
	int t;
	cin >> t;

	while(t--) {
		solve();
	}	
	
	return 0;
}