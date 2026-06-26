#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    ll count = 1;
    ll longest = 1;
    for (ll i = 1; i < n; i++)
    {
        if (a[i] - a[i - 1] <= k)
        {
            count++;
        }
        else
        {
            count = 1;
        }
        longest = max(longest, count);
    }
    cout << n - longest << "\n";
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}