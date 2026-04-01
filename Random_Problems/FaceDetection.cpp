#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll n, m;
    cin >> n >> m;

    vector<vector<char>> arr(n, vector<char>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    ll ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < m - 1; j++)
        {
            set<char> c;
            c.insert(arr[i][j]);
            c.insert(arr[i][j + 1]);
            c.insert(arr[i + 1][j]);
            c.insert(arr[i + 1][j + 1]);

            if (c.count('f') && c.count('a') && c.count('c') && c.count('e'))
            {
                ans++;
            }
        }
    }
    cout << ans << "\n";
}

int main()
{
    solve();

    return 0;
}
