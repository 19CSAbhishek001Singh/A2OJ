#include <bits/stdc++.h>
#include <ctype.h>
using namespace std;
#define ll long long
#define int long long
#define endl "\n"
#define for0(i, n) for (ll i = 0; i < n; i++)
#define for1(i, n) for (ll i = 1; i <= n; i++)
#define loop(i, a, b) for (ll i = a; i < b; i++)
#define maxpq priority_queue<int>
#define minpq priority_queue<int, vector<int>, greater<int>>
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define bits(n) __builtin_popcount(n)
#define prec(n) fixed << setprecision(n)
#define fr first
#define sc second
#define mem1(a) memset(a, -1, sizeof(a))
#define mem0(a) memset(a, 0, sizeof(a))
#define MOD 1000000007LL
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;

int32_t main()
{
    fio;
    ll tc = 1;
    //cin >> tc;
    while (tc--)
    {

        ll n;
        cin >> n;
        ll a[n];
        ll counte = 0, counto = 0;
        ll lasteven = 0;
        ll lastodd = 0;
        for1(i, n)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                counte++;
                lasteven = i;
            }
            else
            {
                counto++;
                lastodd = i;
            }
        }
        if (counto == 1)
        {
            cout << lastodd << endl;
        }
        else
        {
            cout << lasteven << endl;
        }
    }
    return 0;
}
