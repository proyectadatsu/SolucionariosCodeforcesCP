#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, cont = 0;
    cin >> n;
    for (int c = 1; c <= n; c++) {
        for (int a = 1; a <= (c/(pow(2, 0.5))); a++){
            int b2 = pow(c, 2) - pow(a, 2);
            int b = pow(b2, 0.5);
            if (b*b == b2) cont++;
        }
    }
    cout << cont;
    return 0;
}