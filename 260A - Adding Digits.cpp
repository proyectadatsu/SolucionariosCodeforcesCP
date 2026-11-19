#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ull a, b, n;
    cin >> a >> b >> n;
    for (int j = 0; j < 10; j++) {
        if ((a*10 + j)%b == 0) {
            a = a*10 + j;
            break;
        }
        if (j == 9) {
            cout << -1;
            return 0;
        }
    }
    cout << a;
    for (int i = 1; i < n; i++) {
        cout << '0';
    }
}