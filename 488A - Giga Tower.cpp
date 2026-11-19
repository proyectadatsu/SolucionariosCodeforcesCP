#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool hallarCifra(ll a){
    while (a != 0){
        if (abs(a%10) == 8){
            return true;
        }
        a /= 10;
    }
    return false;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll a, b = 0;
    cin >> a;
    a++;
    b++;
    while(!hallarCifra(a)){
        a++;
        b++;
    }
    cout << b;
    return 0;
}