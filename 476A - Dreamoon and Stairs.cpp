#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    if (n < m){
        cout << -1;
        return 0;
    }
    int aux1 = 2*m;
    for (int aux2 = 2*m; aux2 <= 20000; aux2 += aux1){
        if (n <= aux2){
            cout << aux2/2;
            break;
        }
    }
    return 0;
}