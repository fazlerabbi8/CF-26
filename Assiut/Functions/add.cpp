#include<bits/stdc++.h>
using namespace std;

int add(long long X, long long Y){
    return X + Y;
}

int main(){
    long long X, Y; cin >> X >> Y;

    long long n = add(X, Y);

    cout << n << "\n";

    return 0;
}