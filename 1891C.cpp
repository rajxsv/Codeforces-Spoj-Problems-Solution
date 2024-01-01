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

    int n; cin >> n;
    vector<int> nums(n); f(i,0,n) cin >> nums[i];
    sort(begin(nums), end(nums));

    int i = 0;
    int j = n-1;
    ll combo = 0;
    ll kills = 0;

    while(i < j) {
        if(nums[i] + combo < nums[j]) {
            kills += nums[i]; combo += nums[i];
            i++;
        }else{
            if(nums[i] + combo == nums[j]){
                kills += (1 + nums[i]);
                combo = 0; 
                i++;
            }else{
                int diff = nums[j]-combo;

                nums[i] -= diff;
                kills += (1 + diff); 
                combo = 0;
            }
            nums[j] = 0;
            j--;
        }
    }
    if(i==j) {
        if(nums[i] == 1) kills++;
        else {
            kills += max(1,((nums[i] - combo)/2) + ((nums[i]-combo)%2) + 1);
        }
    }

    cout << kills << endl;

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