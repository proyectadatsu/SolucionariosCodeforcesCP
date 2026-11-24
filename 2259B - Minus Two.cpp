#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

void solve(){
    int n, imp = 0, p4 = 0, np4 = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        int aux;
        cin >> aux;
        if (aux%2 != 0) imp++;
        else if (aux%4 == 0) p4++;
        else np4++;
    }
    cout << max(max(p4, np4), imp) << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}