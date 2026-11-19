#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll k, l, x;
    cin >> k >> l;
    if (k > l) {
        cout << "NO";
        return 0;
    }
    ll aux = k;
    for (x = 0; k < l; k *= aux) {
        if (l%k != 0 || (l/k)%aux != 0) {
            cout << "NO";
            return 0;
        }
        x++;
    }
    cout << "YES" << endl;
    cout << x;
    return 0;
}