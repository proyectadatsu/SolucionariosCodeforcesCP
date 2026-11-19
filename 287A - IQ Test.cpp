#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    char arr[4][4];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int punto = 0, michi = 0;
            if (arr[i+1][j] == '#') {
                michi++;
            } else {
                punto++;
            }
            if (arr[i][j+1] == '#') {
                michi++;
            } else {
                punto++;
            }
            if (arr[i+1][j+1] == '#') {
                michi++;
            } else {
                punto++;
            }
            if (arr[i][j] == '#' && (michi >= 2 || punto == 3)) {
                cout << "YES";
                return 0;
            }
            if (arr[i][j] == '.' && (punto >= 2 || michi == 3)) {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}