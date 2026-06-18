#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = a[0];
    int prefixMin = a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i] < prefixMin)
        {
            ans += a[i];
            prefixMin = a[i];
        }
        else
        {
            ans += prefixMin;
        }
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

    return 0;
}