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

    int a, b, c;
    cin >> a >> b >> c;
    int exp1 = a + b + c;
    int exp2 = a * b * c;
    int exp3 = a + b * c;
    int exp4 = a * b + c;
    int exp5 = a * (b + c);
    int exp6 = (a + b) * c;
    cout << max(exp1, max(exp2, max(exp3, max(exp4, max(exp5, exp6)))));
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
