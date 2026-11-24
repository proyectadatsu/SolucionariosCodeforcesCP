#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    if (x == a && y > b){
        cout << "N";
    }
    if (x > a && y > b){
        cout << "NE";
        if (abs(x-a) > abs(y-b)) cout << "\nE";
        else if (abs(x-a) < abs(y-b)) cout << "\nN";
        else return;
    }
    if (x > a && y == b){
        cout << "E";
    }
    if (x > a && y < b){
        cout << "SE";
        if (abs(x-a) > abs(y-b)) cout << "\nE";
        else if (abs(x-a) < abs(y-b)) cout << "\nS";
        else return;
    }
    if (x == a && y < b){
        cout << "S";
    }
    if (x < a && y < b){
        cout << "SW";
        if (abs(x-a) > abs(y-b)) cout << "\nW";
        else if (abs(x-a) < abs(y-b)) cout << "\nS";
        else return;
    }
    if (x < a && y == b){
        cout << "W";
    }
    if (x < a && y > b){
        cout << "NW";
        if (abs(x-a) > abs(y-b)) cout << "\nW";
        else if (abs(x-a) < abs(y-b)) cout << "\nN";
        else return;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}