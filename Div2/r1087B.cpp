#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        int count1 = 0, count2 = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] > a[i])
                count1++;
            if (a[j] < a[i])
                count2++;
        }
        ans[i] = max(count1, count2);
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << "\n";
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