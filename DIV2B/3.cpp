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
#define for0(i, n) for (ll i = 0; i < n; i++)
#define for1(i, n) for (ll i = 1; i <= n; i++)
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define bits(n) __builtin_popcount(n)
#define prec(n) fixed << setprecision(n)
#define mem1(a) memset(a, -1, sizeof(a))
#define mem0(a) memset(a, 0, sizeof(a))
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
    while (tc--)
    {

        ll n, m, k;
        cin >> n >> m >> k;
        // one way

        // bitset<32> ar[m + 10];
        // for (ll i = 0; i < m + 1; i++)
        // {
        //     ll x;
        //     cin >> x;
        //     ar[i] = x;
        // }
        // ll ans = 0;
        // for (ll i = 0; i < m; i++)
        // {
        //     ll kdiff = 0;
        //     for (ll j = 0; j < 32; j++)
        //     {
        //         if (ar[m][j] != ar[i][j])
        //             kdiff++;
        //     }
        //     if (kdiff <= k)
        //     {
        //         ans++;
        //     }
        // }
        // cout << ans << endl;

        // another way
        ll a[m + 1];
        for (int i = 0; i < m + 1; i++)
        {
            cin >> a[i];
        }

        ll x;

        ll sum = 0;
        for (int i = 0; i < m; i++)
        {
            x = a[i] ^ a[m];
            ll count;
            count = __builtin_popcount(x);

            if (count <= k)
                sum++;
        }

        cout << sum << endl;
    }
    return 0;
}