#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, idx;
    cin >> n;
    int arr[3002] = {0};
    for (int i = 0; i < n; ++i){
        cin >> idx;
        arr[idx] = 1;
    }
    for (int i = 1; i <= 3001; ++i){
        if (arr[i] == 0){
            cout << i;
            break;
        }
    }
    return 0;
}