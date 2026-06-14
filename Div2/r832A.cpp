#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int maxElement = *max_element(a.begin(), a.end());

    vector<ll> b, c;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == maxElement)
        {
            c.push_back(a[i]);
        }
        else
        {
            b.push_back(a[i]);
        }
    }

    if (b.size() == 0)
    {
        cout << -1 << "\n";
    }
    else
    {
        cout << b.size() << " " << c.size() << "\n";

        for (int i = 0; i < b.size(); i++)
        {
            cout << b[i] << " ";
        }
        cout << "\n";

        for (int i = 0; i < c.size(); i++)
        {
            cout << c[i] << " ";
        }
        cout << "\n";
        }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}