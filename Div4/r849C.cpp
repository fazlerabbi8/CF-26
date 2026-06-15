#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int left = 0;
    int right = n - 1;
    while (left <= right)
    {
        if (s[left] != s[right])
        {
            n -= 2;
        }
        else
        {
            break;
        }
        left++;
        right--;
    }
    cout << n << "\n";
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