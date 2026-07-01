#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll n;
    cin >> n;

    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans = gcd(ans, abs(a[i] - i));
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