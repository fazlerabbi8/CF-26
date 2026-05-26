#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxElement = 0, indexCount = 0;
    for(auto x : arr)
    {
        maxElement = max(maxElement, x);
    }
    for(auto x : arr)
    {
        if(x == maxElement)
        {
            indexCount++;
        }
    }
    cout << indexCount << "\n";
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