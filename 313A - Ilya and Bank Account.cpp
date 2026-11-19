#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    if (n >= 0){
        cout << n;
        return 0;
    }
    n *= -1;
    int a = n%10;
    if ((n/10) <= (((n/100)*10) + a)){
        cout << (n/10)*-1;
    } else {
        cout << (((n/100)*10) + a)*-1;
    }
    return 0;
}