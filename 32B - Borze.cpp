#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string cod, trad = "";
    cin >> cod;
    for (int i = 0; i < cod.size(); ++i){
        if (cod[i] == '.') trad += '0';
        else{
            if (cod[i+1] == '.') trad += '1';
            else trad += '2';
            ++i;
        }
    }
    cout << trad;
    return 0;
}