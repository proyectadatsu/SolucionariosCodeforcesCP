#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, i = 1;
    cin >> n;
    vector<int> a;
    while (n != 0) {
        if (n%10 != 0) a.push_back(n%10*i);
        i *= 10;
        n /= 10;
    }
    int b = a.size();
    cout << b << "\n";
    for (int j = 0; j < b; j++) {
        if (a[j] != 0) cout << a[j] << " ";
    }
    cout << "\n";
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}