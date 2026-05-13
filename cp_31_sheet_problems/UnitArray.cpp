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

    int minusOneCount = 0;
    int plusOneCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == -1)
        {
            minusOneCount++;
        }
        if (arr[i] == 1)
        {
            plusOneCount++;
        }
    }
    int totalOperations = 0;
    while (plusOneCount < minusOneCount || minusOneCount % 2 != 0)
    {
        plusOneCount++;
        minusOneCount--;
        totalOperations++;
    }
    cout << totalOperations << "\n";
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