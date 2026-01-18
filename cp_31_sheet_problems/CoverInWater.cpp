#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    bool continuous_three_empty_cells = false;
    int count_total_empty_cells = 0;

    for (int i = 0; i < n; i++)
    {
        if (str[i] == '.' && i + 1 < n && str[i + 1] == '.' && i + 2 < n && str[i + 2] == '.')
        {
            continuous_three_empty_cells = true;
            break;
        }
        if (str[i] == '.')
        {
            count_total_empty_cells++;
        }
    }
    if (continuous_three_empty_cells)
    {
        cout << 2 << "\n";
    }
    else
    {
        cout << count_total_empty_cells << "\n";
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}