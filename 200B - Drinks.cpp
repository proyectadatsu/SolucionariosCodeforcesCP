#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    double sum = 0, aux;
    for (int i = 0; i < n; i++) {
        cin >> aux;
        sum += aux;
    }
    cout << fixed << setprecision(12) << (sum / n);
}