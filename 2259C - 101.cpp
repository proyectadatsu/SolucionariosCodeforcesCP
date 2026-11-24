#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

void solve(){
    int n, idx;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++){
        if (arr[i] == 1 || arr[i] == -1){
            arr[i] = 1;
            idx = i;
            break;
        }
    }
    for (int i = n-1; i >= idx; i--){
        if (arr[i] == 1 || arr[i] == -1){
            arr[i] = 1;
            break;
        }
    }
    for (int i = 1; i < n-1; i++){
        if (arr[i] == -1) arr[i] = 0;
    }
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
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