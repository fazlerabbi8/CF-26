#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << i << " " << n + i * 2 - 1 << " " << n + i * 2 << " ";
    }
    cout << "\n";
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