#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;
    if (count(s.begin(), s.end(), '(') == count(s.begin(), s.end(), ')')) {
        cout << "YES\n";
    } else cout << "NO\n";
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