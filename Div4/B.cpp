#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n = 7;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int totalNeg = 0;
    for (int i = 0; i < 6; i++)
    {
        totalNeg += -arr[i];
    }

    int maximum = 0;
    for (int i = 0; i < n; i++)
    {
        maximum = totalNeg + arr[n - 1];
    }
    cout << maximum << "\n";
}

int main()
{
    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}