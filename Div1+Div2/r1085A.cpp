#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int maximum = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (s[i - 1] == '1' && s[i + 1] == '1')
        {
            s[i] = '1';
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            maximum++;
        }
    }

    int minimum = maximum;
    for (int i = 1; i < n - 1; i++)
    {
        if (s[i - 1] == '1' && s[i + 1] == '1')
        {
            minimum--;
            i++;
        }
    }
    cout << minimum << " " << maximum << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while(t--)
    {
        solve();
    }
}