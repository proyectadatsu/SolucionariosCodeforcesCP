#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n;
    string last;
    cin >> n;
    ll sum1 = 0, sum2 = 0, aux;
    vector<ll> arr1, arr2;
    for (int i = 0; i < n; ++i) {
        cin >> aux;
        if (aux < 0) {
            arr2.push_back(-aux);
            sum2 += -aux;
            if (i == n-1) last = "second";
        } else {
            arr1.push_back(aux);
            sum1 += aux;
            if (i == n-1) last = "first";
        }
    }
    if (sum1 > sum2) {
        cout << "first";
    } else if (sum1 < sum2) {
        cout << "second";
    } else if (arr1 > arr2) {
        cout << "first";
    } else if (arr1 < arr2) {
        cout << "second";
    } else cout << last;
}