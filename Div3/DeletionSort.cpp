#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        
        bool nonDec = true;
        for (int i = 1; i < n; i++) {
            if (a[i] < a[i-1]) {
                nonDec = false;
                break;
            }
        }
        
        if (nonDec) {
            cout << n << "\n";
        } else {
            cout << 1 << "\n";
        }
    }
    
    return 0;
}