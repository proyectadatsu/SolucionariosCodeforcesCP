#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, h, m, aux = 1, cajas = 1;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> h;
        cin >> m;
        arr[i] = (h*60 + m);
    }
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            aux++;
        }
        if (arr[i] != arr[i - 1] || i == n - 1) {
            if (aux > cajas) {
                cajas = aux;
            }
            aux = 1;
        }
    }
    cout << cajas;
    return 0;
}