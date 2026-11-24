#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

void solve(){
    int a, b, c, cont = 0;
    cin >> a >> b >> c;
    while (a != b && a != c && b != c){
        int aux1 = min(min(a,b),c), aux2 = max(max(a,b),c);
        if (aux1 == a){
            if (aux2 == b){
                b--;
                a++;
            } else {
                c--;
                a++;
            }
        } else if (aux1 == b){
            if (aux2 == a){
                a--;
                b++;
            } else {
                c--;
                b++;
            }
        } else {
            if (aux2 == a){
                a--;
                c++;
            } else {
                b--;
                c++;
            }
        }
        cont++;
    }
    cout << cont << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}