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

ll dp[20][2][11];

ll digitDP(string &s, int idx, int tight, int prev) {
  if(idx==s.size()) {
    return 1;
  }
  if(dp[idx][tight][prev] != -1) return dp[idx][tight][prev];

  int limit = tight==0?9:s[idx]-'0';
  int ans = 0;

  for(int i=0; i<=limit; i++) {
    if(i!=prev || i==-1) {
      ans += digitDP(s,idx+1,tight&(i==s[idx]-'0'),i);
    }
  }
  return dp[idx][tight][prev] = ans;
}

void solve() {

  ll l,r;
  string ls,rs;
  cin >> l >> r;
  ls = to_string(l-1);
  rs = to_string(r);  
  memset(dp,-1,sizeof(dp));
  ll right = digitDP(rs,0,1,-1);
  memset(dp,-1,sizeof(dp));
  ll left = digitDP(ls,0,1,-1);

  cout << right - left << endl;

}

int main()
{

  int t=1;

  while(t--){
    solve();
  }
  return 0;

}