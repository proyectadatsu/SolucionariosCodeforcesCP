#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, up, down, upSum = 0, downSum = 0;
    cin >> n;
    int dif[n];
    for (int i = 0; i < n; i++) {
        cin >> up >> down;
        upSum += up;
        downSum += down;
        dif[i] = abs(up - down);
    }
    if (upSum%2 == 0 && downSum%2 == 0) {
        cout << 0;
        return 0;
    }
    if (upSum%2 != 0 && downSum%2 != 0){
        sort(dif, dif + n);
        for (int i = 0; i < n; i++) {
            if (dif[i]%2 != 0) {
                cout << 1;
                return 0;
            }
        }
    }
    cout << -1;
    return 0;
}