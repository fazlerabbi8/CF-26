#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (d < b)
    {
        cout << -1 << "\n";
        return;
    }

    int m = d - b;

    a += m;

    if (a < c)
    {
        cout << -1 << "\n";
        return;
    }
    m += a - c;
    cout << m << "\n";
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

    return 0;
}