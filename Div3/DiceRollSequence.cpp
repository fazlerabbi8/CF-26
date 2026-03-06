#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solve(vector<int> &arr, int n)
{
    int ans = 0;
    for (ll i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1] || arr[i] + arr[i - 1] == 7)
        {
            ans++;
            i++;
        }
    }
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        solve(arr, n);
    }
    return 0;
}