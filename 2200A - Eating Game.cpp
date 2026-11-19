#include <bits/stdc++.h>
using namespace std;

long long solve(vector<int> a) {
    const int max = *max_element(a.begin(), a.end());
    return count(a.begin(), a.end(), max);
}

int main () {
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