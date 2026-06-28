#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    int ans = 0;
    int bit = 1;
    int minimum = INT_MAX;

    while (n >= bit)
    {
        minimum = min(k, n / bit);
        ans += minimum;
        n -= minimum * bit;
        bit *= 2;
    }
    cout << ans << "\n";
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