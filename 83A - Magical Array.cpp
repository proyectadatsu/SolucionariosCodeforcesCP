#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    ll last = 1000000001, aux1, aux2 = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> aux1;
        if (aux1 == last) {
            aux2++;
        } else aux2 = 1;
        sum += aux2;
        last = aux1;
    }
    cout << sum;
}