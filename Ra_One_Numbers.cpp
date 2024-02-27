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

ll dp[27][2][60][60];
int n;

ll solve(string &s, int idx, int tight, int sumO, int sumE, int flag) {
  if(idx==s.size()) {
    return (sumE-sumO) == 1;
  }
  if(dp[idx][tight][sumO][sumE]!=-1) return dp[idx][tight][sumO][sumE];
  int limit = tight?s[idx]-'0':9;
  ll ans = 0;
  for(int i=0; i<=limit; i++) {
    ans += solve(s,idx+1,tight&(i==s[idx]-'0'),sumO+(flag?0:i),sumE+((flag)?i:0),flag?0:1);
  }
  return dp[idx][tight][sumO][sumE] = ans;
}

void solve() {

  ll l;
  string rs;
  cin >> l >> rs;

  string ls = to_string(l-1);
  
  memset(dp,-1,sizeof(dp));
  n = rs.size();
  int flag = n&1?0:1;
  ll rightAns = solve(rs,0,1,0,0,flag);
  
  memset(dp,-1,sizeof(dp));
  n = ls.size();
  flag = n&1?0:1;
  ll leftAns = solve(ls,0,1,0,0,flag);
  
  cout << rightAns - leftAns << endl;

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