#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[15] = {2, 3, 5, 7, 11, 13, 17, 19,
        23, 29, 31, 37, 41, 43, 47};
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < 15; i++) {
        if (i == 14) {
            cout << "NO";
            return 0;
        }
        if (arr[i] == n) {
            if (arr[i+1] == m) {
                cout << "YES";
            } else {
                cout << "NO";
            }
            return 0;
        }
    }
}