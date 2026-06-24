#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll a, b, n;
    cin >> a >> b >> n;

    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll ans = b;
    for (ll i = 0; i < n; i++)
    {
        ans += min(a - 1, arr[i]);
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