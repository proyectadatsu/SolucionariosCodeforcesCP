#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

void solve() {
    int n, k;
    ll ans = 0;
    cin >> n >> k;
    ll a[n], b[k];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < k; i++){
        cin >> b[i];
    }
    sort(a, a+n);
    sort(b, b+k);
    int aux = n-1;
    for (int i = 0; i < k; i++){
        if (aux - b[i]+1 >= 0){
            a[aux - b[i]+1] = 0;
            aux -= b[i];
        }
    }
    for (int i = 0; i < n; i++){
        ans += a[i];
    }
    cout << ans << "\n";
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