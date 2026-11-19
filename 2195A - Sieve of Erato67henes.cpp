#include <bits/stdc++.h>
using namespace std;

string solve(vector<int> a) {
    auto sixseven = find(a.begin(), a.end(), 67);
    if (sixseven != a.end()) return "YES";
    return "NO";
}


int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int j = 0; j < n; j++) {
            cin >> a[j];
        }
        cout << solve(a) << endl;
    }
}