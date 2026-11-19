#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int x, y, aux, pos;
    for (int i = 1; i <= 5; ++i){
        for (int j = 1; j <= 5; ++j){
            cin >> aux;
            if (aux == 1){
                x = i-3;
                if (x < 0) x *= -1;
                y = j-3;
                if (y < 0) y *= -1;
                pos = x+y;
            }
        }
    }
    cout << pos;
    return 0;
}