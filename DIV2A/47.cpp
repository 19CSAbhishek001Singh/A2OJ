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

        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int mp = max((3 * a) / 10, a - ((a * c) / 250));
        int vp = max((3 * b) / 10, b - ((b * d) / 250));
        if (mp > vp)
        {
            cout << "Misha\n";
        }
        else if (mp < vp)
        {
            cout << "Vasya\n";
        }
        else
        {
            cout << "Tie\n";
        }
    }
    return 0;
}
