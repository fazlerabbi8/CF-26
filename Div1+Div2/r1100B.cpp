#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    ll sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += max(a[i], b[i]);
    }
    
    ll maxValue = 0;
    for(int i = 0; i < n; i++)
    {
        maxValue = max(maxValue, sum + min(a[i], b[i]));
    }
    cout << maxValue << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;

    while(t--)
    {
        solve();
    }
}