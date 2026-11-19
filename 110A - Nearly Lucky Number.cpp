#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n, cont = 0;
    cin >> n;
    while (n != 0){
        if (n%10 == 4 or n%10 == 7) ++cont;
        n /= 10;
    }
    if (cont == 0) cout << "NO";
    else{
        while (cont != 0){
            if (cont%10 != 4 && cont%10 != 7){
                cout << "NO";
                break;
            }
            cont /= 10;
            if (cont == 0) cout << "YES";
        }
    }
    return 0;
}