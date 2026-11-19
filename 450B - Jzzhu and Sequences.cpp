#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll x, y, n, z;
    cin >> x >> y >> n;
    if (n%6 == 0) {
        z = x - y;
    }
    if (n%6 == 1) {
        z = x;
    }
    if (n%6 == 2) {
        z = y;
    }
    if (n%6 == 3) {
        z = y - x;
    }
    if (n%6 == 4) {
        z = -x;
    }
    if (n%6 == 5) {
        z = -y;
    }
    if (z >= 0) cout << z%1000000007;
    else {
        while (z < 0) {
            z += 1000000007;
        }
        cout << z;
    }
}