#include <bits/stdc++.h>
using namespace std;
#define ll long long
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
#define MOD 1000000007LL
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;

void solve()
{
    int n;
    cin >> n;
    map<int, int> m;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        m.insert({x, i});
    }

    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << (*it).second << " ";
    }
    cout << endl;
}

int main()
{
    fio;
    ll t = 1;
    //cin >> t;
    while (t--)
        solve();
    rr;
}
