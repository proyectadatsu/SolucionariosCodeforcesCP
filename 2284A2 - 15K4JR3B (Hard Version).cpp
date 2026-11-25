#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

void solve() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    ll lx = 0, rx = 0, ans;
    for (int i = n-1; i >= 0; i--){
        if (rx <= lx) rx += pow(2, a[i]);
        else if (lx <= rx) lx += pow(2, a[i]);
    }
    ans = lx*rx;
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