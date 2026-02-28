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
    
    int countMax = 0;

    int maximum = 0;

    for (int i = 0; i < n; i++)
    {
        maximum = max(maximum, arr[i]);
        if (maximum == arr[i])
        {
            countMax++;
        }
    }

    int result = n - countMax;

    cout << result << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cout.tie(0), cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}