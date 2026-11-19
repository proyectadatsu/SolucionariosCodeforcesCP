#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, aux;
    cin >> n;
    int a[n];
    for (int i = 1; i <= n; ++i){
        cin >> aux;
        a[aux-1] = i;
    }
    for (int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }
    return 0;
}