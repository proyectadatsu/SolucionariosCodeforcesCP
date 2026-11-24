#include <bits/stdc++.h>
using namespace std;

void solve() {
    int incog = 0, initial = 0, real = 0;
    string s;
    cin >> s;
    for (char c : s){
        if (c == '+') real++;
        else real--;
    }
    cin >> s;
    for (char c : s){
        if (c == '+') initial++;
        else if (c == '-') initial--;
        else incog++;
    }
    long double prob = 0;
    cout << fixed << setprecision(12);
    if (incog == 0){
        if (initial == real) prob = 1;
        else prob = 0;
        cout << prob;
    } else {
        int div = 1 << incog, rule = div;
        vector<int> arr(div, initial);
        for (int i = 0; i < incog; i++){
            rule /= 2;
            int aux = 0, aux2, sum = 1;
            arr[0] += sum;
            for (int j = 1; j < div; j++){
                aux2 = j/rule;
                if (aux2 != aux){
                    sum *= -1;
                }
                arr[j] += sum;
                aux = aux2;
            }
        }
        for (int i = 0; i < div; i++){
            if (arr[i] == real) prob++;
        }
        cout << prob/(long double)div;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}