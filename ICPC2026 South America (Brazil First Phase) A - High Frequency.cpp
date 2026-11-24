#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N, Q, c, v;
    cin >> N;
    double csum[N+1] = {0}, vsum[N+1] = {0}, I[N+1];
    csum[0] = 0, vsum[0] = 0;
    for (int i = 1; i <= N; i++){
        cin >> c >> v;
        csum[i] = csum[i-1] + c;
        vsum[i] = vsum[i-1] + v;
        I[i] = (csum[i] - vsum[i])/(csum[i] + vsum[i]);
    }
    cin >> Q;
    for (int i = 0; i < Q; i++){
        int n;
        cin >> n;
        if (I[n] > 0) cout << "COMPRA";
        else if (I[n] < 0) cout << "VENDA";
        else cout << "NEUTRO";
        cout << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}