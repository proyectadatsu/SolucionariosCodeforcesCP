#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    char c;
    cin >> n >> m;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            cin >> c;
            if (c == '.'){
                if ((i+j)%2 == 0) {
                    cout << 'B';
                } else {
                    cout << 'W';
                }
            } else {
                cout << '-';
            }
        }
        cout << "\n";
    }
    return 0;
}