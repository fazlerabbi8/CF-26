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

    vector<int> copy_arr = arr;
    sort(copy_arr.begin(), copy_arr.end());

    // i take it key value concept.key is card value and value will be its color
    map<int, int> color_arr;  
    for (int i = 0; i < n; i++)
    {
        color_arr[copy_arr[i]] = i % 2;
    }

    // bool valid = true;
    // for (int i = 0; i < n - 1; i++)
    // {
    //     if (color_arr[arr[i]] == color_arr[arr[i + 1]])
    //     {
    //         valid = false;
    //         break;
    //     }
    // }

    if (valid)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}