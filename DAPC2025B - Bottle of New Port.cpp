#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

void solve() {
    ld d, a, o, Da, Do;
    cin >> d >> a >> o >> Da >> Do;
    ld alc = a-Da*d;
    if (alc < 0) alc = 0;
    ld liq = o-Do*d;
    if (liq < 0) liq = 0;
    cout << setprecision(15) << (alc*100/(alc + liq));
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}