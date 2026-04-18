#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    string x, s;
    cin >> n >> m >> x >> s;

    int ans = -1;
    for(int i = 0; i <= 5; i++)
    {
        if(x.find(s) != -1)
        {
            ans = i;
            break;
        }
        x += x;
    }
    cout << ans << "\n";
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
    return 0;
}