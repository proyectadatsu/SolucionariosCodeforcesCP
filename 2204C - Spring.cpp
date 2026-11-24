#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b, c, m, la, lb, lc;
    cin >> a >> b >> c >> m;
    la = (m/a)*6 - (m/lcm(a,b))*3 - (m/lcm(a,c))*3 + (m/lcm(lcm(a, b),c))*2;
    lb = (m/b)*6 - (m/lcm(a,b))*3 - (m/lcm(b,c))*3 + (m/lcm(lcm(a, b),c))*2;
    lc = (m/c)*6 - (m/lcm(a,c))*3 - (m/lcm(b,c))*3 + (m/lcm(lcm(a, b),c))*2;
    cout << la << " " << lb << " " << lc << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}