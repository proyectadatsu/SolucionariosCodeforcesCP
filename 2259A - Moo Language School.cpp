#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

void solve(){
    int n, k, cont = 0;
    string s;
    cin >> n >> k >> s;
    for (int i = 0; i < n/k; i++){
        for (int j = 0; j < k; j++){
            if (s[j + i*k] == '0') break;
            else if (j == k-1) cont++;
        }
    }
    cout << cont << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}