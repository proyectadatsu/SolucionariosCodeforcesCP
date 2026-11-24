#include <bits/stdc++.h>
using namespace std;


void solve() {
    string s, a = "";
    cin >> s;
    for (int i = s.length()-1; i>=0; i--){
        char aux = s[i];
        if (aux == 'q') aux = 'p';
        else if (aux == 'p') aux = 'q';
        a += aux;
    }
    cout << a << "\n";
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