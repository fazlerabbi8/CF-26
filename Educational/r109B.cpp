#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int n = s.size();

    int prefix = 0, suffix = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == '1' || s[i] == '3')
        {
            suffix++;
        }
    }
    int ans = suffix+prefix;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == '2')
        {
            prefix++;
        }
        if(s[i] == '1' || s[i] == '3')
        {
            suffix--;
        }
        ans = max(ans, suffix+prefix);
    }
    cout << n-ans << "\n";
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