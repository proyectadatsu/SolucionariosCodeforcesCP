#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    int impar = 0;
    cin >> s;
    int arr[26] = {0};
    for (char c : s){
        arr[c - 'a']++;
    }
    for (int i = 0; i < 26; i++){
        if (arr[i]%2 != 0 && arr[i] != 0) impar++;
        if (impar == 2){
            cout << "no";
            return;
        }
    }
    cout << "yes";
    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}