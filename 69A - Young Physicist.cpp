#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, aux;
    bool equilibrio = true;
    cin >> n;
    int arr[n][3];
    for (int i = 0; i < n; i++){
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }
    for (int i = 0; i < 3; i++){
        aux = 0;
        for (int j = 0; j < n; j++) aux += arr[j][i];
        if (aux != 0) equilibrio = false;
    }
    if (equilibrio == true) cout << "YES";
    else cout << "NO";
    return 0;
}