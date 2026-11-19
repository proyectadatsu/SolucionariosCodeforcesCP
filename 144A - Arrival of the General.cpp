#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, maxpos, minpos, max = 1, min = 100, aux;
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> aux;
        if (aux > max){
            max = aux;
            maxpos = i;
        }
        if (aux <= min){
            min = aux;
            minpos = i;
        }
    }
    if (maxpos < minpos) cout << (maxpos + (n - minpos - 1));
    else cout << (maxpos + (n - minpos - 2));
    return 0;
}