#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m, k;
    cin >> n >> m >> k;
    if (k >= m){
        cout << 0;
        return 0;
    }
    int arr[n];
    for (int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    sort(arr, arr + n, greater<int>());
    int plugs = k;
    for (int i = 0; i < n; ++i){
        plugs += (arr[i] - 1);
        if (plugs >= m){
            cout << i+1;
            return 0;
        }
    }
    cout << -1;
    return 0;
}