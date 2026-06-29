#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, c;
    cin >> n >> c;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < b[i])
        {
            flag = false;
        }
    }

    int ans = 0;
    if (flag)
    {
        for (int i = 0; i < n; i++)
        {
            ans += a[i] - b[i];
        }
    }
    else
    {
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        ans = c;
        flag = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < b[i])
            {
                flag = false;
                break;
            }
            ans += a[i] - b[i];
        }
        if (!flag)
        {
            ans = -1;
        }
    }
    cout << ans << "\n";
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