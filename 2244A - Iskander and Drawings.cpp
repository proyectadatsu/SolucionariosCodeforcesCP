#include <bits/stdc++.h>
using namespace std;

int solve(string s) {
    int sum = 0, max_value = 0;
    for (char c : s) {
        if (c == '#') sum++;
        if (c == '*') {
            max_value = max(max_value, (sum+1)/2);
            sum = 0;
        }
    }
    max_value = max(max_value, (sum+1)/2);
    return max_value;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        cout << solve(s) << "\n";
    }
}