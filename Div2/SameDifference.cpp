#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        
        int m = 0;
        char last = s[n - 1];
        
        for (int i = 0; i < n - 1; i++)
            m += (s[i] != last);
        
        cout << m << "\n";
    }
    
    return 0;
}