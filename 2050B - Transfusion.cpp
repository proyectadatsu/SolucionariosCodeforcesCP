#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    double simpar = 0, impar = 0, spar = 0, par = 0;
    cin >> n;
    long long arr[n+1];
    for (int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++){
        if (i%2 != 0){
            impar++;
            simpar += arr[i];
        }
        else {
            par++;
            spar += arr[i];
        }
    }
    if (((long long)spar + (long long)simpar)%n != 0) cout << "NO\n";
    else {
        if (spar/par == simpar/impar) cout << "YES\n";
        else cout << "NO\n";
    }
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