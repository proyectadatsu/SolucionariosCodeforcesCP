#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, cont, min;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    while (cont != n){
        cont = 0;
        min = *min_element(arr, arr +n);
        for (int i = 0; i < n; ++i){;
            while (arr[i] - min > 0){
                arr[i] -= min;
            }
        }
        for (int i = 0; i < n; ++i){
            if (arr[i] == min) cont++;
        }
    }
    cout << min*n;
    return 0;
}