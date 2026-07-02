#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll n;
    cin >> n;

    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        mp[a[i]]++;
    }

    ll currentFreq = 0;
    for (auto x : mp)
    {
        currentFreq = max(currentFreq, x.second);
    }

    ll operation = 0;
    while (currentFreq < n)
    {
        operation++;
        if (currentFreq * 2 <= n)
        {
            operation += currentFreq;
            currentFreq *= 2;
        }
        else
        {
            operation += n - currentFreq;
            currentFreq = n;
        }
    }
    cout << operation << "\n";
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