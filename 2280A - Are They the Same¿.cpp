#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

void solve() {
    ll n, k;
    cin >> n >> k;
    ll apar = 0, aimpar = 0, bpar = 0, bimpar = 0;
    for (int i = 0; i < n; i++){
        int aux;
        cin >> aux;
        if (aux%2) aimpar++;
        else apar++;
    }
    for (int i = 0; i < n; i++){
        int aux;
        cin >> aux;
        if (aux%2) bimpar++;
        else bpar++;
    }
    if (k%2 == 0 && apar <= bpar) cout << "YES";
    else if (k%2 != 0 && aimpar <= bimpar) cout << "YES";
    else cout << "NO";
    cout << "\n";
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