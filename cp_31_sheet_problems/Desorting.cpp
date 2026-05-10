#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (is_sorted(arr.begin(), arr.end()))
    {
        int minGap = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            minGap = min(minGap, arr[i + 1] - arr[i]);
        }
        cout << (minGap / 2) + 1 << "\n";
    }
    else
    {
        cout << 0 << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}