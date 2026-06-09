#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    vector<ll> a(n);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
    }
    ll ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        ans += a[i];
    }
    cout << -ans << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}