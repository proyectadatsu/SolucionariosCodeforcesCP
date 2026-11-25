#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

void solve() {
    int n;
    cin >> n;
    if (n == 2){
        cout << -1 << "\n";
        return;
    }
    for (int i = 0; i < n; i++){
        if (i < 3) cout << i+1 << " ";
        else {
            ll aux = 3*pow(2, i-2);
            cout << aux << " ";
        }
    }
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