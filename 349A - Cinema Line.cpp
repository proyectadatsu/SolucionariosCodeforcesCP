#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, aux;
    cin >> n;
    int arr[101] = {0};
    for (int i = 0; i < n; i++) {
        cin >> aux;
        arr[aux]++;
        if (aux == 50) {
            if (arr[25] < 1) {
                cout << "NO";
                return 0;
            }
            arr[25]--;
        }
        if (aux == 100) {
            if (arr[50] >= 1 && arr[25] >= 1) {
                arr[50]--;
                arr[25]--;
            } else if (arr[25] >= 3) {
                arr[25] -= 3;
            } else {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
    return 0;
}