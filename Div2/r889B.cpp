#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll n;
    cin >> n;

    ll maxInterval = 1;

    while (n % maxInterval == 0)
    {
        maxInterval++;
    }
    cout << maxInterval - 1 << "\n";
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