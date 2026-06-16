#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int xorSum = 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        xorSum ^= a[i];
    }

    if (xorSum == 0)
    {
        cout << 0 << "\n";
    }
    else if (n % 2 == 1)
    {
        cout << xorSum << "\n";
    }
    else
    {
        cout << -1 << "\n";
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