#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, cont = 1;
    string lm, cm;
    cin >> n >> lm;
    for (int i = 1; i < n; ++i){
        cin >> cm;
        if (cm != lm) cont++;
        lm = cm;
    }
    cout << cont;
    return 0;
}