/*
CP Abhishek
Codeforces - Abhishekcs001
Codechef - abhishekcs
AtCoder - abhishekcs001
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define endl "\n"
#define for0(i,n) for(ll i=0;i<n;i++)
#define for1(i,n) for(ll i=1;i<=n;i++)
#define fio ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define bits(n) __builtin_popcount(n)
#define prec(n) fixed<<setprecision(n)
#define mem1(a) memset(a,-1,sizeof(a))
#define mem0(a) memset(a,0,sizeof(a))
#define MOD 1000000007LL
#define F first
#define S second
#define PB push_back
#define MP make_pair
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef pair<ll, ll> pll;
typedef vector<pll> vpll;



int32_t main()
{
   fio;
   ll tc = 1;
   //cin >> tc;
   while (tc--) {

      ll n, m;
      cin >> n >> m;
      ll init = 1;
      ll ans = 0;
      for0(i, m) {
         ll x;
         cin >> x;
         ans += (x - init + n) % n;
         init=x;
      }
      cout << ans << endl;
   }



   return 0;
}