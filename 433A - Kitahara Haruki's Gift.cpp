#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int aux, n;
    int a[201] = {0};
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> aux;
        ++a[aux];
    }
    if (a[100] != 0){
        if (a[100]%2 != 0){
            cout << "NO";
            return 0;
        }
    } else {
        if (a[200]%2 != 0){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}