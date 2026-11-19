#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, t;
    string s;
    cin >> n >> t >> s;
    for (int i = 0; i < t; ++i){
        for (int j = 0; j < n-1; ++j){
            if (s[j] == 'B' && s[j+1] == 'G'){
                swap(s[j], s[j+1]);
                ++j;
            }
        }
    }
    cout << s;
    return 0;
}