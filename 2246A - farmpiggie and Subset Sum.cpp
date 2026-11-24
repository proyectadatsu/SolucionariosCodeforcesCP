#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n-1; i++){
        cout << i+2 << " ";
    }
    cout << 1 << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}