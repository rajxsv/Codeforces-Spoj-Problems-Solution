#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>

#define f(i,s,e) for(long long int i=s;i<e;i++)

template <class T>
void print_v(vector<T> &v) { cout << "{"; for (auto x : v) cout << x << ","; cout << "\b}"; }

#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
ll min(ll a,int b) { if (a<b) return a; return b; }
ll min(int a,ll b) { if (a<b) return a; return b; }
ll max(ll a,int b) { if (a>b) return a; return b; }
ll max(int a,ll b) { if (a>b) return a; return b; }
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
bool prime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

int rec = 10;

bool isScramble(string s1, string s2) {
    if(s1 == s2) return true;
    if(s1.size() == 1 || s2.size() == 1) return s1 == s2;

    int n = s1.size();

    for(int i=1;i<n; i++) {
        if((isScramble(s1.substr(0,i),s2.substr(0,i)) && isScramble(s1.substr(i),s2.substr(i))) ||
            (isScramble(s1.substr(0,i),s2.substr(n-i)) && isScramble(s1.substr(n-i),s2.substr(0,i)))) {
                return true;
            }
    }

    return false;
}


void solve() {

    string s1 = "abc";
    string s2 = "bca";

    int n = s1.size();

    for(int i=1; i<n; i++) {
        cout << s1.substr(0,i) << " " << s2.substr(0,i)  << " -- " << s1.substr(i) << " " << s2.substr(i) << endl;
        cout << s1.substr(0,i) << " " << s2.substr(n-i)  << " -- " << s1.substr(n-i) << " " << s2.substr(0,i) << endl;
        cout << endl;
    }

    cout << isScramble(s1,s2);

}

int main()
{

    int t = 1;
    // cin >> t;

    while(t--){
        solve();
    }
    return 0;

}