#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

void solve(){
    int x, y, m, sum;
    cin >> x >> y >> m;
    string s;
    int arr[m];
    cin >> s;
    sum = x + y;
    for (int i = 0; i < m; i++){
        char c = s[i];
        if (c == '+' && y > 0){
            y++;
        } else if (c == '-' && y > 0){
            if (y == 1 & x > 0) x--;
            else {
                y--;
                x++;
            }
        } else if (c == '+' && x > 0){
            x--;
            y++;
        } else if (c == '-' && x > 0){
            x--;
        }
        arr[i] = x + y;
        sum = max(arr[i], sum);
    }
    cout << sum << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}