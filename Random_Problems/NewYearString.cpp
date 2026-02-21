#include <bits/stdc++.h>
using namespace std;

void solve(string s)
{
    if (s.find("2025")  != -1 && s.find("2026") == -1)
    {
        cout << 1 << "\n";
    }
    else
    {
        cout << 0 << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        string s; cin >> s;

        solve(s);
    }

    return 0;
}