#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool checkNumber(ll n)
{
    ll countDisits = 0;
    ll countZeros = 0;

    while (n)
    {
        if (n % 10 == 0)
        {
            countZeros++;
        }
        countDisits++;
        n /= 10;
    }

    return countZeros == countDisits - 1;
}

vector<ll> a;

void solve()
{
    ll n;
    cin >> n;

    ll count = 0;

    for (ll i = 0; i < a.size(); i++)
    {
        if (a[i] <= n)
        {
            count++;
        }
        else
        {
            break;
        }
    }

    cout << count << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    for (ll i = 1; i <= 999999; i++)
    {
        if (checkNumber(i))
        {
            a.push_back(i);
        }
    }

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}