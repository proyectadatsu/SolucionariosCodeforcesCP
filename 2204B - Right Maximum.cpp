#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, mx, cont = 1;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    mx = arr[0];
    for (int i = 1; i < n; i++){
        if (arr[i] >= mx){
            cont++;
        }
        mx = max(arr[i], mx);
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