#include <bits/stdc++.h>
using namespace std;

string solve(pair <int, int> a) {
    if (a.first%2 != 0 && a.second%2 != 0) return "NO";
    return "YES";
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--) {
        pair <int, int> a;
        cin >> a.first >> a.second;
        cout << solve(a) << endl;
    }
}