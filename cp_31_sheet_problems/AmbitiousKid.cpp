#include<bits/stdc++.h>
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

    int minAbs = abs(arr[0]);
    for (int i = 1; i < n; i++) {
        minAbs = min(minAbs, abs(arr[i]));
    }
    cout << minAbs << "\n";
}
int main()
{
    solve();
}