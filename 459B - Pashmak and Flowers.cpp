#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n, max = 1, min = 10000000000, nmax = 0, nmin = 0;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; ++i){
        cin >> arr[i];
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }
    if (max == min){
        cout << 0 << " " << (n*(n-1))/2;
    } else {
        for (int i = 0; i < n; ++i){
            if (arr[i] == min) ++nmin;
            if (arr[i] == max) ++nmax;
        }
        cout << max-min << " " << nmax*nmin;
    }
    return 0;
}