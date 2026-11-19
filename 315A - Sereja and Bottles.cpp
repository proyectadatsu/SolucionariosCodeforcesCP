#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int cont = n;
    int botellas[n], marcas[n], abiertas[n] = {0};
    for (int i = 0; i < n; i++) {
        cin >> botellas[i];
        cin >> marcas[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) {
                if (marcas[i] == botellas[j]) {
                    abiertas[j] = 1;
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (abiertas[i] == 1) {
            cont--;
        }
    }
    cout << cont;
}