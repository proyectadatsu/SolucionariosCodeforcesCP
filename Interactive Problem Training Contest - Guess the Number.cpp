#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

void solve(){
    ll l = 1, r = 1000000;
    while (l != r){
        ll mid = (l + r + 1)/2;
        cout << mid << endl;
        string ans;
        cin >> ans;
        if (ans == "<") r = mid - 1;
        else l = mid;
    }
    cout << "! " << l << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}