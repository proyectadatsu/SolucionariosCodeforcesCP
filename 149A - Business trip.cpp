#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int k, i, sum = 0;
    int mes[12];
    cin >> k;
    for (i = 0; i < 12; i++) {
        cin >> mes[i];
    }
    sort(mes, mes + 12, greater<int>());
    i = 0;
    while (sum < k) {
        sum += mes[i];
        i++;
        if (i == 12 & sum < k) {
            cout << -1;
            return 0;
        }
    }
    cout << i;
    return 0;
}