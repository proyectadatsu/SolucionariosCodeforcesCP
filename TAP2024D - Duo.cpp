#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

void solve(){
    int A, B, C;
    cin >> A >> B >> C;
    if (A >= B+C || B >= A+C || C >= A+B) cout << "S";
    else cout << "N";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    /*
    int t;
    cin >> t;
    while (t--)
    */
    solve();
}