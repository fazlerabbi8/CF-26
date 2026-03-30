#include<bits/stdc++.h>
using namespace std;

void solve(int n){
    for(int i = n; i >= 1; i--){
        cout << i;
        if(i > 1){
             cout << " ";
        }
    }
    cout << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}