#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(0);
    int n, aux;
    cin >> n;
    int a[1001] = {0};
    for (int i = 0; i < n; i++) {
        cin >> aux;
        a[aux]++;
    }
    int max = *max_element(a, a + 1001);
    if (max <= floor((n+1)/2)) cout << "YES";
    else cout << "NO";
}