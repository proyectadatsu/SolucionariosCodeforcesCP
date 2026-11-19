#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
    int n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    if (n == 1) {
        cout << "YES\n";
        return;
    }
    for (int i = 0; i < n-1; i++) {
        if (arr[i] > i+1) {
            arr[i+1] += arr[i]-(i+1);
            arr[i] -= arr[i]-(i+1);
        }
    }
    for (int i = 0; i < n-1; i++) {
        if (arr[i] >= arr[i+1]) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}
int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}