#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

void solve() {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr+n);
    cout << arr[n-k];

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
