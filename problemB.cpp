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

int dfs(int node, int par, unordered_map<int,vector<int>> &adj) {
  int len=0;
  for(auto nbr:adj[node]) {
    if(nbr==par) continue;
    len = 1+max(len,dfs(nbr,node,adj));
  }
  return len;
}

void solve() {
  int n,u,v,dist=-1;
  cin>>n;
  unordered_map<int,vector<int>> adj;
  for(int i=0;i<n;i++){
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  for(int i=1;i<=n;i++){
    if(adj[i].size()==1) {
      dist = dfs(i,-1,adj);
      cout<<dist<<endl<<endl;
      break;
    }
  }

  for(int i=0;i<n;i++){
    if(dist==-1) cout<<1<<endl;
    if(adj[i].size()==1) {
      cout<<dist+1<<endl;
    } else {
      cout<<dist<<endl;
    }
  }
}

int main(){
  int t=1;

  while(t--){
    solve();
  }
  return 0;

}