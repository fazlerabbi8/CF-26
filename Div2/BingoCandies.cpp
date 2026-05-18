#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    map<int, int> freqCount;
    int maxFreq = 0;

    for (int i = 0; i < n * n; i++)
    {
        int x;
        cin >> x;
        freqCount[x]++;
        maxFreq = max(maxFreq, freqCount[x]);
    }

    if (maxFreq > n * (n - 1))
    {
        cout << "No" << "\n";
    }
    else
    {
        cout << "Yes" << "\n";
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