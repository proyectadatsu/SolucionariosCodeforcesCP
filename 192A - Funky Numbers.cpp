#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

void solve() {
    ll n, sum = 0;
    cin >> n;
    vector<ll> v1;
    for (int i = 1; i <= 100000; i++){
        sum += i;
        v1.push_back(sum);
    }
    ll l = 0, r = v1.size()-1;
    while (l <= r){
        if (v1[l] + v1[r] > n) r--;
        else if (v1[l] + v1[r] < n) l++;
        else {
            cout << "YES";
            return;
        }
    }
    cout << "NO";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}