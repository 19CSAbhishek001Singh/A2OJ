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
#define rr return 0
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

        int x1, y1, x2, y2, x3, y3, x4, y4, a;
        cin >> x1 >> y1 >> x2 >> y2;
        if (x1 == x2)
        {
            a = y2 - y1;
            x3 = x1 + a;
            y3 = y1;
            x4 = x2 + a;
            y4 = y3 + a;
        }
        else if (y1 == y2)
        {
            a = x2 - x1;
            x3 = x1;
            y3 = y1 + a;
            x4 = x3 + a;
            y4 = y2 + a;
        }
        else
        {
            if (abs(x2 - x1) == abs(y2 - y1))
            {
                x3 = x1;
                y3 = y2;
                x4 = x2;
                y4 = y1;
            }
            else
            {
                cout << -1;
                return 0;
            }
        }
        cout << x3 << " " << y3 << " " << x4 << " " << y4;
    }
    rr;
}