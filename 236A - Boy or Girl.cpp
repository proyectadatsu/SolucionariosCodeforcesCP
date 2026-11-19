#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a;
    int sum = 0;
    cin >> a;
    int arr[26] = {0};
    for (char c : a){
        ++arr[c-97];
    }
    for (int i = 0; i < 26; ++i){
        if (arr[i] != 0) sum++;
    }
    if (!(sum%2 != 0)){
        cout << "CHAT WITH HER!";
        return 0;
    }
    cout << "IGNORE HIM!";
    return 0;
}