#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j < n && a[j] > b[i])
        {
            j++;
        }
        if (j == n)
        {
            ans = -1;
            break;
        }
        while (j > i)
        {
            swap(a[j], a[j - 1]);
            ans++;
            j--;
        }
    }
    cout << ans << "\n";
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

    return 0;
}