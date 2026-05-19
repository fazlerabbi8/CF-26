#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll n, a, b;
    cin >> n >> a >> b;
    cout << n / 3 * min(3 * a, b) + min(n % 3 * a, b) << "\n";
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