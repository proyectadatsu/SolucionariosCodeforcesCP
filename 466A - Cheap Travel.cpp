#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m, a, b;
    long long cost = 0;
    cin >> n >> m >> a >> b;
    if (b <= a*m){
        while(n > m){
            cost += b;
            n -= m;
        }
        if (n > 0){
            if (b > a*n){
                cost += a*n;
            } else {
                cost += b;
            }
        }
        cout << cost;
    } else {
        cost = a*n;
        cout << cost;
    }
    return 0;
}