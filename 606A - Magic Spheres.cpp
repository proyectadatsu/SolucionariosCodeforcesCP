#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    ll a, b, c, x, y, z;
    cin >> a >> b >> c >> x >> y >> z;
    if (a >= x && b >= y && c >= z){
        cout << "Yes";
        return 0;
    }
    while(a-2 >= x || b-2 >= y || c-2 >= z){
        if (a < x){
            if (b-2 >= y){
                b -= 2;
                a++;
            }
            if (c-2 >= z){
                c -= 2;
                a++;
            }
        }
        if (b < y){
            if (a-2 >= x){
                a -= 2;
                b++;
            }
            if (c-2 >= z){
                c -= 2;
                b++;
            }
        }
        if (c < z){
            if (a-2 >= x){
                a -= 2;
                c++;
            }
            if (b-2 >= y){
                b -= 2;
                c++;
            }
        }
        if (a >= x && b >= y && c >= z){
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
}