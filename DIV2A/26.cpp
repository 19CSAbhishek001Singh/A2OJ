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
        ll a1[5000], a2[5000], a3[5000];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll count1 = 0, count2 = 0, count3 = 0;
        ll x = 0, y = 0, z = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                a1[x++] = i + 1;
                count1++;
            }
            else if (a[i] == 2)
            {
                a2[y++] = i + 1;
                count2++;
            }
            else
            {
                a3[z++] = i + 1;
                count3++;
            }
        }
        ll mini = min(count1, min(count2, count3));
        cout << mini << endl;
        for (int i = 0; i < mini; i++)
        {
            cout << a1[i] << " " << a2[i] << " " << a3[i];
            cout << endl;
        }
    }
    return 0;
}