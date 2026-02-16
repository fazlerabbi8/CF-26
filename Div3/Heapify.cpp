#include<bits/stdc++.h>
using namespace std;

const int limit = 18;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        vector<int> arr(n);

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        for(int k = 0; k < limit; k++){
            for(int i = 0; i * 2 + 1 < n; i++){
                if(arr[i] > arr[i * 2 + 1]){
                    swap(arr[i], arr[i * 2 + 1]);
                }
            }
        }
        if(is_sorted(arr.begin(), arr.end())){
            cout << "YES" << "\n";
        }else{
            cout << "NO" << "\n";
        }
    }
}