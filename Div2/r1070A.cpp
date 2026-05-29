#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<pair<int, int>>
#define pii pair<int, int>
#define ll long long
#define pll pair<ll, ll>

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int countMaxElement = 0;
    int countMax = 0;

    for(int i = 0; i < n; i++)
    {
        countMax = max(countMax, a[i]);
        if(a[i] == countMax)
        {
            countMaxElement++;
        }
    }

    cout << n - countMaxElement << "\n";
    
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while(t--)
    {
        solve();
    }
}