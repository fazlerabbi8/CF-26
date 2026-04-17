#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    map<int, int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr[x]++;
    }

    if(arr.size() >= 3)
    {
        cout << "No" << "\n";
    }
    else
    {
        if(abs(arr.begin() -> second - arr.rbegin() -> second) <= 1)
        {
            cout << "Yes" << "\n";
        }
        else
        {
            cout << "No" << "\n";
        }
    }
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