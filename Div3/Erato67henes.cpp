#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>& arr, int n){
    bool found = false;
    for(int i = 0; i < n; i++){
        if(arr[i] == 67){
            found = true;
            break;
        }
    }
    if(found){
        cout << "YES" << "\n";
    }else{
        cout << "No" << "\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> arr(n);

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        
        solve(arr, n);
    }
    return 0;
}