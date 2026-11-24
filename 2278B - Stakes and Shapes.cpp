#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

void solve(){
    int x, y, z, best;
    cin >> x >> y >> z;
    best = max(max(x,y),z);
    if (best == x){
        for (int i = 0; i < x+y+z; i++) cout << "P";
    } else if (best == y){
        for (int i = 0; i < x+y+z; i++) cout << "R";
    } else {
        for (int i = 0; i < x+y+z; i++) cout << "S";
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}