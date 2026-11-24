#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

void solve(){
    int n, m;
    string p, q;
    cin >> n >> m >> p >> q;
    if (n < m){
        cout << "NO\n";
        return;
    }
    int letraP[26] = {0}, letraQ[26] = {0};
    for (char c : p){
        letraP[c - 'a']++;
    }
    for (char c : q){
        letraQ[c - 'a']++;
    }
    for (int i = 0; i < 26; i++){
        if (i == 8 || i == 18 || i == 23){
            if (letraP[i] - letraQ[i] != 1){
                cout << "NO\n";
                return;
            }
        } else {
            if (letraP[i] != letraQ[i]){
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}