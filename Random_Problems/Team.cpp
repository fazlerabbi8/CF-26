#include <bits/stdc++.h>
using namespace std;

int solve(int n)
{
    int a, b, c;
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        if (a + b + c >= 2)
        {
            result++;
        }
    }
    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int total = solve(n);
    cout << total << "\n";

    return 0;
}