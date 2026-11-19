#include <bits/stdc++.h>
using namespace std;

void solve() {
    int arr[7];
    for (int i = 0; i < 7; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + 7);
    cout << arr[6] - (arr[0]+arr[1]+arr[2]+arr[3]+arr[4]+arr[5]) << "\n";
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}