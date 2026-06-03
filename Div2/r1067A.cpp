#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, y, r;
    cin >> n;
    cin >> y >> r;

    int yellowResult = y / 2;
    int maximum = r + yellowResult;

    maximum = min(maximum, n);

    cout << maximum << "\n";
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