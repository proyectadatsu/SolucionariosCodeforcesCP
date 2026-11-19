#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k, i;
    ll sum = 0, aux = 0;
    string s;
    cin >> n >> k;
    cin >> s;
    int arr[26] = {0};
    for (char c : s) {
        arr[c - 'A']++;
    }
    sort(arr, arr + 26, greater<>());
    i = 0;
    while (k != 0) {
        aux++;
        arr[i]--;
        k--;
        if (arr[i] == 0 || k == 0) {
            sum += aux*aux;
            aux = 0;
            i++;
        }
    }
    cout << sum;
}