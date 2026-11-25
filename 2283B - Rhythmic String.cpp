#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

void solve() {
    int n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    ll ans = 0;
    for (int i = 0; i < n; i++){
        ll aux = 0;
        for (int j = 0; j < n; j++){
            if (a[j]%a[i] == 0) aux++;
        }
        ans = max(ans, aux);
    }
    cout << n-ans << "\n";
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