#include <bits/stdc++.h>
using namespace std;

void solve(int x)
{
    if (x == 2)
    {
        cout << 2 << "\n";
    }
    else if (x == 3)
    {
        cout << 3 << "\n";
    }
    else if (x >= 4)
    {
        cout << x % 2 << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;

        solve(x);
    }
    return 0;
}