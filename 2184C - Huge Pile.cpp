#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

void solve() {
    bool f = true;
    ll n, k, a, b, ans = 0;
    cin >> n >> k;
    if (n == k){
        cout << ans << "\n";
        return;
    }
    while (true){
        if (f){
            a = n/2;
            b = (n+1)/2;
            f = false;
        }
        else {
            a = a/2;
            b = (b+1)/2;
        }
        ans++;
        if (k == a || k == b){
            cout << ans << "\n";
            return;
        }
        else if (k > a && k > b){
            cout << -1 << "\n";
            return;
        }
    }
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