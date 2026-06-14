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
    int count = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            count++;
        }
        else
        {
            count = 0;
        }
        ans = max(ans, count);
    }
    cout << max(ans, count) << "\n";
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