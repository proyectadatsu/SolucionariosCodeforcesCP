#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int j = n+1, k = 1;
    for (int i = 0; i < 3*n; i++) {
        if (i%3 == 0) {
            cout << k++ << " ";
        } else cout << j++ << " ";
    }
    cout << "\n";
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