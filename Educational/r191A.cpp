#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x, y, z;
    cin >> n >> x >> y >> z;

    int t1 = (n + x + y - 1) / (x + y);
    int t2 = (z + (n - x * z + 10 * y + x - 1) / (10 * y + x));

    int ans = min(t1, t2);
    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}