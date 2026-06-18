#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> index(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        index[a[i]] = i;
    }
    for (int i = 0; i < n; i++)
    {
        int target = n - i;
        if (a[i] != target)
        {
            int indexElement = index[target];
            reverse(a.begin() + i, a.begin() + indexElement + 1);
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << (i == n - 1 ? "" : " ");
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

    return 0;
}