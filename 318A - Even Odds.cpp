#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, k;
    cin >> n >> k;
    if (n == 1){
        cout << 1;
        return 0;
    }
    if (k <= ((n+1)/2)){
        cout << k*2 - 1;
    } else {
        k -= ((n+1)/2);
        cout << k*2;
    }
    return 0;
}