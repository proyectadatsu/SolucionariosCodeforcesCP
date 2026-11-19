#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll y, k, n, x, cont = 0;
    cin >> y >> k >> n;
    if (n - y < 1) {
        cout << -1;
        return 0;
    }
    ll lim = n - y;
    y = y%k;
    x = k - y;
    for (; x <= lim; x += k) {
        cont++;
        cout << x << " ";
    }
    if (cont == 0) cout << -1;
    return 0;
}