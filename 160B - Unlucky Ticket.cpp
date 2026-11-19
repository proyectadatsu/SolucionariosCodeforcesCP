#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    string num;
    bool a = false;
    cin >> n;
    int mitad1[n], mitad2[n];
    cin >> num;
    for (int i = 0; i < n; i++) {
        mitad1[i] = (num[0] - '0');
        num.erase(num.begin());
    }
    for (int i = 0; i < n; i++) {
        mitad2[i] = (num[0] - '0');
        num.erase(num.begin());
    }
    sort(mitad1, mitad1 + n);
    sort(mitad2, mitad2 + n);
    for (int i = 0; i < n; i++) {
        if (mitad1[i] >= mitad2[i]) {
            a = true;
            break;
        }
    }
    if (a) {
        for (int i = n-1; i >= 0; i--) {
            if (mitad1[i] <= mitad2[i]) {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
    return 0;
}