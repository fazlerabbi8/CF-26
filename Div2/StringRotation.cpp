#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll n;
    cin >> n;

    string s;
    cin >> s;

    int countBlook = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != s[i + 1])
        {
            countBlook++;
        }
    }
    if (countBlook != n && s[0] != s[n - 1])
    {
        countBlook++;
    }

    cout << countBlook++ << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}