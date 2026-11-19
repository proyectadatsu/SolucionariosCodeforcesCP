#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, sum = 0;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n-1; ++i){
        if (s[i] == s[i+1]) ++sum;
    }
    cout << sum;
    return 0;
}