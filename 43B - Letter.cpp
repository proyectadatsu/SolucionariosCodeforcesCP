#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s1, s2;
    int as1[200] = {0}, as2[200] = {0};
    getline(cin, s1);
    getline(cin, s2);
    for (char c : s1){
        ++as1[c];
    }
    for (char c : s2){
        ++as2[c];
    }
    for (int i = 65; i <= 90; ++i){
        if (as2[i] > as1[i]){
            cout << "NO";
            return 0;
        }
    }
    for (int i = 97; i <= 122; ++i){
        if (as2[i] > as1[i]){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}