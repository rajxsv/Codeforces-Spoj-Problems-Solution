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

    int n;
    cin >> n;
    int x,y;

    vector<int> v(4);

    bool xy = false;

    for(int i=0; i<n; i++) {
        cin >> x >> y;
        if(x>0) v[0] = 1;
        if(x<0) v[1] = 1;

        if(y>0) v[2] = 1;
        if(y<0) v[3] = 1;

        xy = (x==0 && y==0);
    }

    bool ans = ((v[0]==1 && v[1]==0) || (v[1]==1 && v[0]==0) || (v[2] == 1 && v[3]==0) || (v[3]==1 && v[2]==0) || 
                (n==1 && xy));


    if(ans) cout << "YES" << endl;
    else cout << "NO" << endl;
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