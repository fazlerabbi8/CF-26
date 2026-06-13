#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    int minElement = INT_MAX, maxElement = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        minElement = min(minElement, a[i]);
        maxElement = max(maxElement, a[i]);
    }

    cout << (maxElement - minElement) + 1 << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}