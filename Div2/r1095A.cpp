#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int cost = 0;
    for (auto x : a)
    {
        if (x > 1)
        {
            cost += x;
        }
    }

    if (a.back() == 1)
    {
        cost += 1;
    }

    cout << cost << "\n";
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