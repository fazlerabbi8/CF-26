#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    long long n;
    cin >> n;

    while (n % 2 == 0)
        n /= 2;

    if (n == 1)
        cout << "NO\n";
    else
        cout << "YES\n";
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