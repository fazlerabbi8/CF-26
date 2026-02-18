#include <bits/stdc++.h>
using namespace std;

void solve(string s)
{
    int len = s.length();
    int midChars = s.length() - 2;

    if (len <= 10)
    {
        cout << s << "\n";
    }
    else if (len > 10)
    {
        cout << s.front() << midChars << s.back() << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        solve(s);
    }

    return 0;
}