#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, sum = 0, x = 0;
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++){
        string s;
        cin >> s;
        arr[i] = s.length();
    }
    for (int i = 0; i < n; i++){
        if (sum + arr[i] <= m){
            sum += arr[i];
            x++;
        } else break;
    }
    cout << x << "\n";
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