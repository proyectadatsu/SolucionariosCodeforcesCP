#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    ll sum = 0;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (ll i = 0; i < n; i++) {
        sum += abs(i+1 - arr[i]);
    }
    cout << sum;
    return 0;
}