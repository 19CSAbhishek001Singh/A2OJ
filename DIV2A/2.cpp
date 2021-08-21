#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string w;
        cin >> w;
        int l = w.length();
        if (l <= 10)
        {
            cout << w << endl;
        }
        else
        {
            cout << *w.begin() << (l - 2) << *(w.end() - 1) << endl;
        }
    }
}