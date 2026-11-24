#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

void solve(){
    int N, sum = 0, streak = 0;
    cin >> N;
    for (int i = 0; i < N; i++){
        int aux;
        cin >> aux;
        if (aux){
            sum++;
            streak++;
        } else {
            sum--;
            streak = 0;
        }
        if (streak >= 3) sum++;
    }
    cout << sum;
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