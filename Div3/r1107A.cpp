#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long x, y;
    cin >> x >> y;

    if (y != 0 && x % y == 0)
        cout << "YES" << "\n";
    else
        cout << "NO" << "\n";
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