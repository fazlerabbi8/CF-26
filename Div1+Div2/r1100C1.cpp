#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> b;
    int flipFlop = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        a[i] *= flipFlop;
        if (a[i] > 0)
        {
            flipFlop *= -1;
            b.push_back(i + 1);
        }
    }

    cout << b.size() << "\n";
    for (int x : b)
    {
        cout << x << " ";
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}