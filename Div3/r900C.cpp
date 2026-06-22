#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll n, k, x;
    cin >> n >> k >> x;

    ll minSum = k * (k + 1) / 2;
    ll r = n - k;
    ll maxSum = n * (n + 1) / 2 - r * (r + 1) / 2;

    if (x <= maxSum && x >= minSum)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }
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