#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

void solve() {
    int l, r;
    cin >> l >> r;
    if (abs(l) == abs(r)) cout << 0 << "\n";
    else if (l == 0 && r != 0) cout << r-1 << "\n";
    else if (l != 0 && r == 0) cout << abs(l)-1 << "\n";
    else if ((l > 0 && r > 0) || (l < 0 && r < 0)) cout << abs(r-l) << "\n";
    else cout << abs(l+r)-1 << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}