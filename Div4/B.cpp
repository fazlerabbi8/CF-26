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

    sort(arr.begin(), arr.end());
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (i != n - 1)
        {
            arr[i] = arr[i] * -1;
        }
        ans += arr[i];
    }

    // Alternative approach
    // int maxIdx = max_element(arr.begin(), arr.end()) - arr.begin();

    // int ans = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (i != maxIdx)
    //         ans += arr[i] * -1; 
    //     else
    //         ans += arr[i];
    // }
    cout << ans << "\n";
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