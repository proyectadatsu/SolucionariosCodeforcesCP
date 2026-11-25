#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

ll arr[1000001];

void solve() {
    ll X, K, cont = 0, aux = 0;
    cin >> X >> K;
    for (int i = 1; aux*X < K; i++){
        aux = arr[i-1] + arr[i];
        cont++;
    }
    cout << cont << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int aux = 0;
    arr[0] = 0; arr[1] = 1;
    for (int i = 2; aux <= 1000000000; i++){
        aux = arr[i-2] + arr[i-1];
        arr[i] = aux;
    }
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}