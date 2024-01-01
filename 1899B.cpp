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

void helper(int &n, vector<int> &windows) {
    for(int i=1; i <= n; i++) {
        if(n%i == 0) {
            windows.push_back(i);
        }
    }
}

void solve() {

    int n;
    long long res = 0;
    cin >> n;

    vector<int> nums(n);
    vector<int> windows;

    f(i,0,n) {
        cin >> nums[i];
    }

    helper(n,windows);

    for(int d=1; d<=n; d++){

        if(n%d == 0){
            long long mx =-1e18;
            long long mn = 1e18;   
        
            for(int ind = 0; ind<n; ind+=d) {
                long long sum = 0;

                for(int i=ind; i<ind+d; i++) {
                    sum += nums[i];
                }

                mx = max(mx,sum);
                mn = min(mn,sum);
            }
            res = max(res, mx-mn);
        }
    }

    cout << res << endl;
}

int main()
{

    int t;
    cin >> t;



    cout << endl;
    while(t--){
        solve();
    }
    return 0;

}