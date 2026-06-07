#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (k == 1)
    {
        cout << *min_element(a.begin(), a.end()) << "\n";
    }
    else if (k == 2)
    {
        cout << max(a.front(), a.back()) << "\n";
    }
    else
    {
        cout << *max_element(a.begin(), a.end()) << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}