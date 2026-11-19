#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    ll max = 1, min = 1000000000;
    ll a[n][2];
    for (int i = 0; i < n; ++i){
        cin >> a[i][0] >> a[i][1];
        if (a[i][0] < min) min = a[i][0];
        if (a[i][1] > max) max = a[i][1];
    }
    for (int i = 0; i < n; ++i){
        if (a[i][0] == min && a[i][1] == max){
            cout << i+1;
            return 0;
        }
    }
    cout << -1;
    return 0;
}