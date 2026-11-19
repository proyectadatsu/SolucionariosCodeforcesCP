#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m, a;
    ll fl = 0, lf = 0;
    cin >> n;
    int pos[100001];
    for (int i = 1; i <= n; ++i){
        cin >> a;
        pos[a] = i;
    }
    cin >> m;
    for (int i = 0; i < m; ++i){
        cin >> a;
        fl += pos[a];
        lf += (n - pos[a] + 1);
    }
    cout << fl << " " << lf;
    return 0;
}