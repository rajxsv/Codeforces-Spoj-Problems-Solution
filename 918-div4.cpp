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

void solve() {
    vector<vector<char>> mat(3,vector<char>(3));
    int a=0,b=0,c=0;

    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cin >> mat[i][j];
        }
    }

    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            char ch=mat[i][j];
            a = (ch=='A'?1:a);
            b = (ch=='B'?1:b);
            c = (ch=='C'?1:c);
        }
        if(!a) {
            cout << 'A' << endl;
            return;
        }
        if(!b) {
            cout << 'B' << endl;
            return;
        }
        if(!c) {
            cout << 'C' << endl;
            return;
        }
        a=0,b=0,c=0;
    }
}   

int main()
{

    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;

}