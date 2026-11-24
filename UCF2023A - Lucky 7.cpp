#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string s;
    cin >> s;
    long long sll = stoll(s);
    if (s.contains("7")){
        if (sll%7 == 0) cout << 3;
        else cout << 2;
    } else {
        if (sll%7 == 0) cout << 1;
        else cout << 0;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}