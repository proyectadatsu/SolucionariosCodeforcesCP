#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll c, n;
    cin >> c >> n;
    if (n == 0) cout << 0;
    else if (c == n) cout << c;
    else if (c < n) cout << c+1;
    else cout << 0;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}