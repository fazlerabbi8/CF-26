#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;

    string s;
    cin >> s;

    ll totalFour = 0, totalEight = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '4')
        {
            totalFour++;
        }
        if (s[i] == '8')
        {
            totalEight++;
        }
    }

    x = abs(x);
    y = abs(y);

    if (totalFour + 2 * totalEight < x + y)
    {
        cout << "NO" << "\n";
    }
    else if (totalFour + totalEight < max(x, y))
    {
        cout << "NO" << "\n";
    }
    else
    {
        cout << "YES" << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}