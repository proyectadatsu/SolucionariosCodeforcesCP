#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    if (n < 1400) cout << "Division 4";
    else if (n < 1600) cout << "Division 3";
    else if (n < 1900) cout << "Division 2";
    else cout << "Division 1";
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