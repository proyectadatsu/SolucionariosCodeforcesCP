#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long i, n, cont = 0, time = 0;
    cin >> n;
    long long arr[n];
    for (i = 0; i < n; ++i)
        cin >> arr[i];
    sort(arr, arr+n);
    for (i = 0; i < n; ++i){
        if (time <= arr[i]){
            ++cont;
            time += arr[i];
        }
    }
    cout << cont;
    return 0;
}