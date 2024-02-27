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

int res = 0;
void dfs(unordered_map<int,vector<int>> &adj, ll &maxCats, vector<int> &isCat, int src, int parent, int cnt, int maxCnt) {
  long long ans=0;
  if(isCat[src])cnt++;
  else cnt=0;
  maxCnt=max(maxCnt,cnt);
  for(auto nbr:adj[src]) {
    if(nbr!=parent){
      dfs(adj,maxCats,isCat,nbr,src,cnt,maxCnt);
      ans++;
    }
  }
  if(ans==0 && maxCnt<=maxCats) res++;
}  

void solve() {

  ll vertices, maxCats;
  cin >> vertices >> maxCats;
  vector<int> isCat(vertices+1,0);
  unordered_map<int,vector<int>> adj;

  for(int i=0; i<vertices; i++) {
    cin >> isCat[i+1];
  }
  // for(auto i:isCat) cout << i << ",";
  // cout << endl;

  for(int i=1; i<vertices; i++) {
    int a,b;
    cin >> a >> b;
    adj[a].push_back(b);
  }
    // for(auto p:adj) {
    //   cout << p.first << "->";
    //   for(auto i : p.second) {
    //     cout << i << ",";
    //   }
    //   cout << endl;
    // }

    if(adj.find(1) == adj.end()) {
      cout << 0 << endl;
    } else {
      dfs(adj,maxCats,isCat,1,-1,0,0);
      cout << res <<endl;
    }


}

int main()
{

  int t=1;

  while(t--){
    solve();
  }
  return 0;

}