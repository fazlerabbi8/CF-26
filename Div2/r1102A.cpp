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

    sort(a.rbegin(), a.rend());

    bool ok = true;

    for (int i = 0; i + 2 < n; i++)
    {
        if (a[i] % a[i + 1] != a[i + 2])
        {
            ok = false;
            break;
        }
    }

    if (!ok)
    {
        cout << -1 << "\n";
    }
    else
    {
        cout << a[0] << " " << a[1] << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}