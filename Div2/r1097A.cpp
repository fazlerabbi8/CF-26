#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    ll ans = 0;
    for (int i = n - 1; i >= 1; --i)
    {
        if (a[i + 1] > 0)
        {
            a[i] += a[i + 1];
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (a[i] > 0)
        {
            ans++;
        }
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