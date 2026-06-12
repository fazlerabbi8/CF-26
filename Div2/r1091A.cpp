#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n , k;
    cin >> n >> k;

    int sum = 0;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    if(sum % 2 == 1)
    {
        cout << "YES" << "\n";
    }
    else if((n * k) % 2 == 0)
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