#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m, maxid;
    ll aux, max;
    cin >> n >> m;
    int vic[n] = {0};
    for (int i = 0; i < m; ++i){
        max = 0;
        for (int j = 0; j < n; ++j){
            cin >> aux;
            if (aux > max){
                max = aux;
                maxid = j;
            }
        }
        if (max == 0){
            ++vic[0];
            continue;
        }
        ++vic[maxid];
    }
    cout << distance(vic, max_element(vic, vic+n)) + 1;
    return 0;
}