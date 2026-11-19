#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a;
    int b0 = 0, b1 = 0;
    cin >> a;
    for (char c : a){
        if (c == '0'){
            ++b0;
            b1 = 0;
        } else {
            ++b1;
            b0 = 0;
        }
        if (b0 >= 7 || b1 >= 7){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}