#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> arr, int a, int b, int c)
{
    sort(arr.begin(), arr.end(), greater<int>());

    int difference = arr[0] - arr[2];

    if (difference >= 10)
    {
        cout << "check again" << "\n";
    }
    else
    {
        cout << "final" << " " << arr[1] << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b, c;
    cin >> a >> b >> c;

    vector<int> arr = {a, b, c};

    solve(arr, a, b, c);

    return 0;
}