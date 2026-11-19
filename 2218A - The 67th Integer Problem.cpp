#include <bits/stdc++.h>
using namespace std;

int solve(int x) {
    if (x <= 0 || x == 67) return x;
    x++;
    return x;
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        cout << solve(x) << endl;
    }
}