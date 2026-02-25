#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--){
        long long n, m, d;
        cin >> n >> m >> d;
        
        long long k = d / m + 1;  
        long long towers = (n + k - 1) / k;    
        cout << towers << "\n";
    }
    
    return 0;
}