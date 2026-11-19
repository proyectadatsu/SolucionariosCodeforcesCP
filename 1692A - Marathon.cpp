#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, aux, cont = 0;
    cin >> a;
    for (int i = 0; i < 3; i++) {
        cin >> aux;
        if (aux > a) cont++;
    }
    cout << cont << "\n";
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