#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int count = 1;
    int longest = 1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[i + 1])
        {
            count++;
        }
        else
        {
            longest = max(count, longest);
            count = 1;
        }
    }
    cout << longest + 1 << "\n";
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