#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;
    if (n == 1) {
        cout << "NO\n";
        return;
    }
    for (int i = 0; i < (int)s.size()-1;) {
        if (s[i] == s[i+1]) {
            s.erase(i, 2);
            i = 0;
        } else i++;
    }
    if (s.empty()) {
        cout << "YES\n";
        return;
    }
    cout << "NO\n";
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