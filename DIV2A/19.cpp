#include <bits/stdc++.h>
#include <ctype.h> //getline(cin,string or n size )
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
    set<int> l;

    int n;
    cin >> n;
    int x;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        int a;
        cin >> a;
        l.insert(a);
    }
    int y;
    cin >> y;
    for (int i = 0; i < y; i++)
    {
        int b;
        cin >> b;
        l.insert(b);
    }

    if (l.size() == n)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }
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
