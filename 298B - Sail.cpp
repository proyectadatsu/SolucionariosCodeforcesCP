#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    char wind;
    ll t, sx, sy, ex, ey;
    cin >> t >> sx >> sy >> ex >> ey;
    for(int i = 1; i <= t; ++i){
        cin >> wind;
        if (wind == 'E' && sx < ex) ++sx;
        else if (wind == 'W' && sx > ex) --sx;
        else if (wind == 'N' && sy < ey) ++sy;
        else if (wind == 'S' && sy > ey) --sy;
        if (sx == ex && sy == ey){
            cout << i;
            return 0;
        }
    }
    cout << -1;
    return 0;
}