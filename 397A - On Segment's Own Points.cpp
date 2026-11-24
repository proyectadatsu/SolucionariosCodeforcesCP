#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, a, b, a2, b2, cont = 0;
    int arr[100] = {0};
    cin >> n >> a >> b;
    for (int i = a; i < b; i++){
        arr[i]++;
    }
    for (int i = 1; i < n; i++){
        cin >> a2 >> b2;
        for (int j = a2; j < b2; j++){
            arr[j]++;
        }
    }
    for (int i = a; i < b; i++){
        if(arr[i] == 1) cont++;
    }
    cout << cont;
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}