#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, y;
    cin >> x >> y;

    if (x % 2 == 0 || y % 2 == 0)
    {
        cout << "Yes" << "\n";
    }
    else
    {
        cout << "No" << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}