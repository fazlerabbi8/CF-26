#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ')')
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }

   
    if (count1 == count2)
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
        solve();

    return 0;
}