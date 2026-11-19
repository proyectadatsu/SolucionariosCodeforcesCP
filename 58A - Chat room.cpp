#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int idx_h = 0, idx_e = 0, idx_l1 = 0, idx_l2 = 0, idx_o = 0, i;
    string s;
    cin >> s;
    for (i = 0; i < s.length(); i++) {
        if (s[i] == 'h') {
            idx_h = i;
            break;
        }
    }
    for (i++; i < s.length(); i++) {
        if (s[i] == 'e') {
            idx_e = i;
            break;
        }
    }
    for (i++; i < s.length(); i++) {
        if (s[i] == 'l') {
            idx_l1 = i;
            break;
        }
    }
    for (i++; i < s.length(); i++) {
        if (s[i] == 'l') {
            idx_l2 = i;
            break;
        }
    }
    for (i++; i < s.length(); i++) {
        if (s[i] == 'o') {
            idx_o = i;
            break;
        }
    }
    if (idx_h < idx_e && idx_e < idx_l1 && idx_l1 < idx_l2 && idx_l2 < idx_o) {
        cout << "YES";
        return 0;
    }
    cout << "NO";
    return 0;
}