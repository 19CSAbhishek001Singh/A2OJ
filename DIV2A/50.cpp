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

        size_t n, m;
        cin >> n >> m;
        vector<string> marks(n);
        for (size_t i = 0; i < n; ++i)
        {
            cin >> marks[i];
        }
        vector<bool> successful(n, false);
        for (size_t subject = 0; subject < m; ++subject)
        {
            char best = '0';
            for (size_t i = 0; i < n; ++i)
            {
                if (marks[i][subject] > best)
                {
                    best = marks[i][subject];
                }
            }
            for (size_t i = 0; i < n; ++i)
            {
                if (marks[i][subject] == best)
                {
                    successful[i] = true;
                }
            }
        }
        cout << count(successful.begin(), successful.end(), true);
    }
    return 0;
}
