#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    int may = 0, min = 0;
    cin >> s;
    for (auto& x : s){
        if (x >= 65 && x <= 90) ++may;
        else ++min;
    }
    if (may > min){
        for (auto& x : s){
            x = toupper(x);
        }
    } else {
        for (auto& x : s){
            x = tolower(x);
        }
    }
    cout << s;
    return 0;
}