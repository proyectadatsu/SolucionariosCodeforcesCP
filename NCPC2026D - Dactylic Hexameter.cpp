#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string s;
    int foot = 0;
    cin >> s;
    if (s.size() < 12 || s.size() > 17) cout << "no";
    else {
        for (int i = 0; i < s.size();){
            if (s[i] == '-'){
                if (foot == 5 && (s.size()-1-i == 1)){
                    cout << "yes";
                    return;
                }
                else if (s[i+1] == '-' && (i+3) < s.size()){
                    i += 2;
                    foot++;
                } else if (s[i+1] == 'u' && s[i+2] == 'u' && (i+4) < s.size()){
                    i += 3;
                    foot++;
                } else {
                    cout << "no";
                    return;
                }
            } else {
                cout << "no";
                return;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}