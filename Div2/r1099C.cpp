#include <bits/stdc++.h>
using namespace std;

ll 

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    unordered_map<ll> cnt1, cnt2;

    long long x = a[0];
    long long c = 0;
    unordered_set<long long> s;

    while (s.find(x) == s.end()) {
        if (cnt1.find(x) == cnt1.end()) {
            cnt1[x] = 0;
            cnt2[x] = 0;
        }
        cnt1[x]++;
        cnt2[x] += c;
        s.insert(x);
        if (x & 1) x += 1;
        else x >>= 1;
        c++;
    }

    for (int i = 1; i < n; i++) {
        x = a[i];
        s.clear();
        c = 0;
        while (s.find(x) == s.end()) {
            if (cnt1.find(x) != cnt1.end()) {
                cnt1[x]++;
                cnt2[x] += c;
            }
            s.insert(x);
            if (x & 1) x += 1;
            else x >>= 1;
            c++;
        }
    }

    long long ans = 1e18;
    for (auto& [k, v] : cnt1) {
        if (v == n) {
            ans = min(ans, cnt2[k]);
        }
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}