#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    ll n, m;
    cin >> n >> m;
    if (n == 1) cout << 1;
    else if (m <= n/2) {
        cout << m+1;
    } else cout << m-1;
    return 0;
}