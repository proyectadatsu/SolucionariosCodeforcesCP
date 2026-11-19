#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a, b, c = "";
    char ea, eb;
    int e = 0;
    cin >> a >> b;
    if (a.length() == b.length()){
        for (int i = 0; i < a.length(); ++i){
            if (a[i] != b[i]){
                ++e;
                c += a[i];
                c += b[i];
            }
        }
        if (e == 2 && c[0] == c[3] && c[1] == c[2]){
            cout << "YES";
            return 0;
        }
        cout << "NO";
        return 0;
    }
    cout << "NO";
    return 0;
}