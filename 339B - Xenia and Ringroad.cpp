#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m, aux = 1, aux2;
    long long sum = 0;
    cin >> n >> m;
    for (int i = 0; i < m; ++i){
        cin >> aux2;
        if (aux2 >= aux){
            sum += (aux2 - aux);
        } else {
            sum += (n - (aux - aux2));
        }
        aux = aux2;
    }
    cout << sum;
    return 0;
}