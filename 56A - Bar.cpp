#include <bits/stdc++.h>
using namespace std;

bool esNum(string s){
    for (int i = 0; i < s.length(); ++i){
        if (s[i] < 48 || s[i] > 57) return false;
    }
    return true;
}

bool esAlcohol(string s){
    if (s == "ABSINTH" || s == "BEER" || s == "BRANDY" || s ==  "CHAMPAGNE" || s == "GIN" || s == "RUM" || s == "SAKE" || s == "TEQUILA" || s == "VODKA" || s == "WHISKEY" || s == "WINE") return true;
    return false;
}

int valor(string s){
    int suma = 0;
    for (int i = 0; i < s.length(); ++i){
        suma += (s[i] - '0');
        suma *= 10;
    }
    return suma/10;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, cont = 0;
    string s;
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> s;
        if (esNum(s)){
            if (valor(s) < 18) ++cont;
        }
        if (esAlcohol(s)) ++cont;
    }
    cout << cont;
    return 0;
}