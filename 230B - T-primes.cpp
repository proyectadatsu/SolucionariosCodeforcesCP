#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define ll long long

bool esPrimo(ll x) {
    if (x <= 1) return false;
    if (x <= 3) return true;
    if (x%2 == 0 || x%3 == 0) return false;
    for (ll i = 5; i*i <= x; i += 6) {
        if (x % i == 0 || x % (i + 2) == 0) return false;
    }
    return true;
}

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, cont = 0;
    ld x;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (floor(sqrt(x)) == sqrt(x)) {
            if (esPrimo(sqrt(x))) cout << "YES" << endl;
            else cout << "NO" << endl;
            continue;
        }
        cout << "NO" << endl;
    }
    return 0;
}