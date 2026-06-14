#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int countTotalTwos = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 2)
        {
            countTotalTwos++;
        }
    }

    if (countTotalTwos == 0)
    {
        cout << 1 << "\n";
    }
    else if (countTotalTwos % 2 != 0)
    {
        cout << -1 << "\n";
    }
    else
    {
        int currentTwos = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 2)
            {
                currentTwos++;
            }
            if (currentTwos == (countTotalTwos / 2))
            {
                cout << i + 1 << "\n";
                break;
            }
        }
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