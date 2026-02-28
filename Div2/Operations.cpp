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

    int countMax = 0;

    int maximum = 0;

    for (int i = 0; i < n; i++)
    {
        maximum = max(maximum, arr[i]);
        if (maximum == arr[i])
        {
            countMax++;
        }
    }

    int result = n - countMax;

    cout << result << "\n";

    // alternative
    // int n,s,t=0,k=0;
	// cin>>n;
	// while(n--){
	// 	cin>>s;
	// 	if(k>s)t++;
	// 	else k=s;
	// }
	// cout<<t<<'\n';
	// return;

    // int maxn=0,x,n;
	// 	cin>>n;
	// 	int ans=n;
	// 	while(n--){
	// 		cin>>x;
	// 		if(maxn<=x){
	// 			ans--;maxn=x;
	// 		}
	// 	}
	// 	cout<<ans<<'\n';
}

int main()
{
    ios::sync_with_stdio(0);
    cout.tie(0), cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}