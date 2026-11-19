#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string aux;
    int cont = 0;
    char sol = ' ';
    int a[4][2];
    for (int i = 0; i < 4; ++i){
        cin >> aux;
        aux.erase(0, 2);
        a[i][0] = aux.length();
        a[i][1] = i;
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3 - i; ++j) {
            if (a[j][0] > a[j + 1][0]) {
                int temp = a[j][0];
                int temp2 = a[j][1];
                a[j][0] = a[j + 1][0];
                a[j][1] = a[j + 1][1];
                a[j + 1][0] = temp;
                a[j + 1][1] = temp2;
            }
        }
    }
    if (2*a[0][0] <= a[1][0]) {
        cont++;
        sol = a[0][1] + 'A';
    }
    if (a[3][0] >= 2*a[2][0]) {
        cont++;
        sol = a[3][1] + 'A';
    }
    if (cont == 1) {
        cout << sol;
        return 0;
    }
    cout << 'C';
    return 0;
}