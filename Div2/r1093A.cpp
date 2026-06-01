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

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            cout << "-1" << "\n";
            return;
        }
    }

    for (auto x : a)
    {
        cout << x << " ";
        cout << "\n";
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