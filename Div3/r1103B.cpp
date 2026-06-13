#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    for (int i = 0; i < n; i++)
    {
        if (i + k >= n)
        {
            break;
        }
        if (s[i] == '1')
        {
            s[i] = '0';
            if (s[i + k] == '0')
            {
                s[i + k] = '1';
            }
            else
            {
                s[i + k] = '0';
            }
        }
    }

    bool ans = true;
    for (auto c : s)
    {
        if (c == '1')
        {
            ans = false;
        }
    }

    if (ans)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
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