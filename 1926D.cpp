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

class TrieNode{
public:
  int data;
  unordered_map<int,TrieNode*> children;
  int count;

  TrieNode(int data=-1){
    this->data=data;
    this->count=0;
  }
};

class Trie{
public:
  TrieNode* root;
  int leaf;
  Trie(){
    root=new TrieNode();
  }
  void insert(int num){
    TrieNode* n = root;
    for(int i=0;i<32;i++) {
      int bit = num&1;
      if(n->children[bit]) {
        n=n->children[bit];
      } else {
        n->children[bit]=new TrieNode();
        n=n->children[bit];
      }
      num>>=1;
    }
  }

  int groupify(int num) {
    TrieNode* n = root;
    num = ~num;
    int tmp = num;
    for(int i=0;i<32;i++) {
      int bit = num&1;
      if(n->children[bit]) {
        n=n->children[bit];
      } else {
        return 0;
      }
      num>>=1;
    }
    num=tmp;
    for(int i=0;i<32;i++) {
      int bit = num&1;
      n=n->children[bit];
      n->data=1;
      n->count++;
    }
    return n->count-1;
  }
};

void solve() {
  int ans = 0,n;
  cin>>n;
  vector<int> v(n);
  Trie* t = new Trie();
  for(int i=0;i<n;i++){
    cin >> v[i];
    ans += t->insert(v[i]);
  }
  cout << ans << endl;
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
