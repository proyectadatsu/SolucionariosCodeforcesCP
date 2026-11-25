#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

void solve() {
    ll x;
    cin >> x;
    if (x%4 == 2) cout << "NO";
    else cout << "YES";
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}