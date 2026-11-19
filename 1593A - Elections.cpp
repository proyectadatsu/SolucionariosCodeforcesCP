#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    ll arr[t][5] = {0};
    for (int i = 0; i < t; ++i){
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
        arr[i][3] = max({arr[i][0], arr[i][1], arr[i][2]});
        if (arr[i][0] == arr[i][3]) ++arr[i][4];
        if (arr[i][1] == arr[i][3]) ++arr[i][4];
        if (arr[i][2] == arr[i][3]) ++arr[i][4];
    }
    for (int i = 0; i < t; ++i){
        for (int j = 0; j < 3; ++j){
            if (arr[i][j] == arr[i][3] && arr[i][4] == 1){
                cout << 0 << " ";
                continue;
            }
            cout << (arr[i][3] - arr[i][j]) + 1 << " ";
        }
        if (i != t-1) cout << "\n";
    }
    return 0;
}