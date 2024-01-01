#include<bits/stdc++.h>
using namespace std;

bool canChange(char a, char b) {
	if(a==b) return true;
	return abs(int(b-'0')-int(a-'0')) == 2; // they wanna be equal

}

void solve() {
	int n;
	cin >> n;

	string s;
	cin >>s;

	int left=0,right=n-1;

	while(left < right) {
		if(canChange(s[left],s[right])) {
			left++;
			right--;
		}else{
			cout << "NO" <<endl;
			return;
		}
	}
	cout << "YES" << endl;
	return;
}

int main() {
	
	int t;
	cin >> t;

	while(t--) {
		solve();
	}	
	
	return 0;
}