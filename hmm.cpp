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

    // for(int i=0; i<n; i++) {
    //     cin >> v[i];
    //     prod *= v[i];

    //     if(v[i]<0) {
    //         neg++;
    //         negInd = i+1;
    //     }
    //     else if(v[i] > 0){
    //         posInd = i+1;
    //     }
    // }

    // if(prod == 0){
    //     cout << 0 << endl;
    //     return;
    // }

    // if(neg&1) {
    //     // odd negative 
    //     cout << 0 << endl;
    // }else if(neg != 0){
    //     // even negative
    //     cout << 1 << endl;
    //     cout << negInd << " " << 0 << endl;
    // }else if(neg == 0){
    //     // only positive 
    //     cout << 1 << endl;
    //     cout << posInd << " " << 0 << endl;
    // }

void solve() {

    int n;
    cin >> n;

    vector<int> v(n);
    int neg = 0;
    int zero = 0;

    for(int i=0; i<n; i++){
        cin >> v[i];

        neg += (v[i]<0);
        zero = (v[i]==0);
        
    }

    if(zero || neg&1) cout << 0 << endl;
    else{
        cout << 1 << endl;
        cout << 1 << " " << 0 << endl;
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