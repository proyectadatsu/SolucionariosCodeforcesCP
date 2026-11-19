#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int sum = 0;
    bool oddexists = false;
    string s;
    cin >> s;
    int arr[26] = {0};
    for (char c : s){
        ++arr[c-97];
    }
    for (int i = 0; i < 26; ++i){
        if (arr[i]%2 != 0 && !oddexists){
            oddexists = true;
        } else if (arr[i]%2 != 0){
            ++sum;
        }
    }
    if (sum%2 == 0) cout << "First";
    else cout << "Second";
    return 0;
}