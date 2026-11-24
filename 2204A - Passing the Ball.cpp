#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n, i = 0, cont = 0;
    string s;
    cin >> n >> s;
    for (char c : s){
        if (c == 'R') cont++;
        else{
            cont++;
            break;
        }
    }
    cout << cont << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}