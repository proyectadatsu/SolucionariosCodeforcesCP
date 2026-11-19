#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    int a[100001];
    cin >> n >> k;
    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }
    int start = n-1, end = n-1, e = a[n-1];
    for (int i = n-1; i > 0; --i){
        if (a[i-1] == a[i]){
            --end;
        } else break;
    }
    if (a[k-1] == e && end <= k-1 && k-1 <= start){
        cout << n - 1 - (start - end);
        return 0;
    }
    cout << -1;
    return 0;
}