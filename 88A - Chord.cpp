#include <bits/stdc++.h>
using namespace std;

int convert(string s){
    if (s == "C") return 1;
    if (s == "C#") return 2;
    if (s == "D") return 3;
    if (s == "D#") return 4;
    if (s == "E") return 5;
    if (s == "F") return 6;
    if (s == "F#") return 7;
    if (s == "G") return 8;
    if (s == "G#") return 9;
    if (s == "A") return 10;
    if (s == "B") return 11;
    if (s == "H") return 12;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a, b, c;
    cin >> a >> b >> c;
    int m = convert(a), n = convert(b), p = convert(c);
    for (int i = 0; i < 12; ++i){
        ++m;
        ++n;
        ++p;
        if (m == 13) m = 1;
        if (n == 13) n = 1;
        if (p == 13) p = 1;
        if ((m == 1 && n == 5 && p == 8) || (m == 1 && n == 8 && p == 5) || (m == 5 && n == 1 && p == 8) || (m == 8 && n == 1 && p == 5) || (m == 5 && n == 8 && p == 1) || (m == 8 && n == 5 && p == 1)){
            cout << "major";
            return 0;
        } else if ((m == 1 && n == 4 && p == 8) || (m == 1 && n == 8 && p == 4) || (m == 4 && n == 1 && p == 8) || (m == 8 && n == 1 && p == 4) || (m == 4 && n == 8 && p == 1) || (m == 8 && n == 4 && p == 1)) {
            cout << "minor";
            return 0;
        }
    }
    cout << "strange";
    return 0;
}