#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin >> n;

	int low1 = 0;
	int high1 = n;

	int ans = -1;

	int xi = INT_MAX/2;
	int yi = INT_MAX/2;

	for(int x = low1 ; x<=high1 ;x++) {
		int low2 = 0;
		int high2 = n;

		bool found = false;

		while(low2 <= high2) {
			int y = (low2 + high2) / 2;
			int potAns = 4*x + 7*y;
			
			if(potAns < n) {
				low2 = y + 1;
			}else if(potAns > n){
				high2 = y - 1;
			}else{
				if(x+y < xi+yi){
					xi = x;
					yi = y;
				}
				break;
			}
		}

	}	

	if(xi == INT_MAX/2 && yi == INT_MAX/2) {
		cout << -1 << endl;
		return 0;
	}

	for (int i = 0; i < xi; ++i)
	{
		cout << "4";
	}
	for (int i = 0; i < yi; ++i)
	{
		cout << "7";
	}

	return 0;
}