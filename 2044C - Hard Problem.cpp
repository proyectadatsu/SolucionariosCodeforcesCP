#include <bits/stdc++.h>
using namespace std;


void solve() {
    long long m, a, b, c, left, right, cont = 0;
    cin >> m >> a >> b >> c;
    left = m;
    right = m;
    if (left - a >= 0){
        left -= a;
        cont += a;
    }
    else{
        cont += left;
        left = 0;
    }
    if (right - b >= 0){
        right -= b;
        cont += b;
    }
    else{
        cont += right;
        right = 0;
    }
    long long rest = left + right;
    if (rest - c >= 0){
        cont += c;
    }
    else{
        cont += rest;
    }
    cout << cont << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}