#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    if (a == b && b == n || (a + b + 2 <= n))
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
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

    return 0;
}