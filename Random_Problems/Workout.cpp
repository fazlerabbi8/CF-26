#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    vector<int> exercises(3, 0);

    for(int i = 0; i < n; i++){
        int a; cin >> a;
        exercises[i % 3] += a;
    }

    int maxValue = *max_element(exercises.begin(), exercises.end());

    if(exercises[0] == maxValue){
        cout << "chest" << "\n";
    }
    if(exercises[1] == maxValue){
        cout << "biceps" << "\n";
    }
    if(exercises[2] == maxValue){
        cout << "back" << "\n";
    }
    
    return 0;
}