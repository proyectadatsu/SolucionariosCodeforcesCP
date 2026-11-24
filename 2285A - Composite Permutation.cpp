#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n;
    cin >> n;
    if (n <= 3){
        cout << -1 << "\n";
        return;
    }
    int arr[n];
    for (int i = 0; i < n; i++){
        arr[i] = (n-i);
    }
    if (n%2 != 0){
        swap(arr[0], arr[1]);
        swap(arr[n-1], arr[n-2]);
    }
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
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