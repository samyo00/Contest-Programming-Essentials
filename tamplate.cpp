#include<bits/stdc++.h>
using namespace std;
#define ll long long 
typedef unsigned long long  ull;
#define mod  1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define file freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define all(s) s.begin(),s.end()
typedef vector<ll>          vi;
typedef pair<int,int>       pii;
#define si(x)               scanf("%d", &x)
#define loop(i, y)          for(int i=0; i<int(y); i++)
#define rep(i, y)          for(int i=1; i<=int(y); i++)
#define iloop(i, y)         for(int i=y-1; i>=0; --i)
bool isPowerOfTwo(int n) {if (n == 0)return false; return (ceil(log2(n)) == floor(log2(n)));}
bool isPerfectSquare(ll x) {if (x >= 0) {ll sr = sqrt(x); return (sr * sr == x);} return false;}
const ll MAXN=2e5+10;
ll inv(ll i) {if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}

void solve()
{
	
}

 
int main()
{
   int t;
   scanf("%d",&t);
   while(t--){
      solve();
   }

   return 0;
}