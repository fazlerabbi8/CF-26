#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    set<char> st;
    for (char c : s)
    {
        st.insert(c);
    }
    if (k == 0)
    {
        string t = s;
        reverse(t.begin(), t.end());
        if (s < t)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
    else
    {
        if (st.size() == 1)
        {
            cout << "NO" << "\n";
        }
        else
        {
            cout << "YES" << "\n";
        }
    }
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