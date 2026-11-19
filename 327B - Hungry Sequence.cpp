#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool esPrimo(ll num){
    if (num == 2) return true;
    if (num%2 == 0) return false;
    for (int i = 3; i*i <= num; i += 2){
        if (num%i == 0) return false;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    ll num = 2, cont = 0;
    cin >> n;
    while (cont < n){
        if(esPrimo(num)){
            cout << num << " ";
            ++cont;
        }
        ++num;
    }
    return 0;
}