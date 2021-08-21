/*
CP Abhishek
Codeforces - Abhishekcs001
Codechef - abhishekcs
AtCoder - abhishekcs001
*/

#include <bits/stdc++.h>
#include <ctype.h>
using namespace std;
#define ll long long
#define int long long
#define endl "\n"
#define for0(i, n) for (ll i = 0; i < n; i++)
#define for1(i, n) for (ll i = 1; i <= n; i++)
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

        bool flag = 0;
        ll n, m;
        cin >> n >> m;
        ll a[n], b[m];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        int maxi = a[0];
        int mini = a[0];
        for (int i = 0; i < n; i++)
        {
            if (a[i] > maxi)
            {
                maxi = a[i];
            }
            if (a[i] < mini)
            {
                mini = a[i];
            }
        }

        int val = max(2 * mini, maxi);
        int minb = b[0];
        for (int i = 0; i < m; i++)
        {
            if (b[i] < minb)
            {
                minb = b[i];
            }
        }
        if (val < minb)
        {
            cout << val << endl;
        }
        else
        {
            cout << "-1\n";
        }
    }
    return 0;
}
