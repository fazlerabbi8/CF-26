#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, x;
    cin >> a >> b >> x;

    int ans = INT_MAX;
    int cop = 0;
    while (1)
    {
        if (a < b)
        {
            swap(a, b);
        }
        ans = min(ans, cop + (a - b));
        if (a == b)
        {
            break;
        }
        a /= x;
        cop++;
    }
    cout << ans << "\n";
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