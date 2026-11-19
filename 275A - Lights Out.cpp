#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int i, j, sum;
    int arr[3][3];
    for (i = 0; i < 3; ++i)
        for (j = 0; j < 3; ++j) cin >> arr[i][j];
	
    for (i = 0; i < 3; ++i){
        for (j = 0; j < 3; ++j){
            sum = arr[i][j];
            if (i >= 1) sum += arr[i-1][j];
            if (i <= 1) sum += arr[i+1][j];
            if (j >= 1) sum += arr[i][j-1];
            if (j <= 1) sum += arr[i][j+1];
            if (sum%2 == 0){
                cout << 1;
            } else cout << 0;
        }
        cout << "\n";
    }

    return 0;
}