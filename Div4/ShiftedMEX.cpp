#include <bits/stdc++.h>
using namespace std;

void solve(set<int> s, int n)
{
    int longest = 1;
    int current = 1;

    int previous = *s.begin();
    for (auto it = next(s.begin()); it != s.end(); it++)
    {
        if (*it == previous + 1)
        {
            current++;
            longest = max(longest, current);
        }
        else
        {
            current = 1;
        }
        previous = *it;
    }
    cout << longest << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        set<int> s;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            s.insert(x);
        }

        solve(s, n);
    }
    return 0;
}
