#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(3, 0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr[x]++;
    }

    int minimum = min(arr[1], arr[2]);
    int left = abs(arr[1] - arr[2]);

    cout << arr[0] + minimum + left / 3 << "\n";
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}