// #include<bits/stdc++.h>
// using namespace std;

// long long calculateValue(vector<int>& arr){
//     long long total = 0;
//     int currentMax = 0;

//     for(int i = 0; i < arr.size(); i++){
//         currentMax = max(currentMax, arr[i]);
//         total += currentMax;
//     }

//     return total;

// }

// long long solve(int n, vector<int>& arr){
//     long long maxValue = calculateValue(arr);

//     for(int i = 0; i < n; i++){
//         for(int j = i + 1; j < n; j++){
//             swap(arr[i], arr[j]);

//             long long newValue = calculateValue(arr);
//             maxValue = max(maxValue, newValue);

//             swap(arr[i], arr[j]);
//         }
//     }
//     return maxValue;
// }

// int main() {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);

//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;

//         vector<int> arr(n);
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//         }

//         long long result = solve(n, arr);
//         cout << result << "\n";
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &arr, int n)
{
    cout << *max_element(arr.begin(), arr.end()) * n << "\n";
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);

        for (auto &x : arr)
        {
            cin >> x;
        }

        solve(arr, n);
    }

    return 0;
}