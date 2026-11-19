#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    ll aux, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> aux;
        sum += aux;
    }
    if (sum%n == 0) {
        cout << n;
        return 0;
    }
    cout << n-1;
    return 0;
}