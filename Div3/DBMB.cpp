#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, s, x;
    cin >> n >> s >> x;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    if (s >= sum && (sum - s) % x == 0)
    {
        cout << "Yes" << "\n";
    }
    else
    {
        cout << "No" << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while(t--)
    {
        solve();
    }
    return 0;
}