#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a;
    cin >> a;
    for(int i = a.length() - 1; i >= 0; --i){
        if (a[i] == '0'){
            for (int j = 0; i <= i; ++j){
                if (a[j] == '0'){
                    a.erase(j, 1);
                    cout << a;
                    return 0;
                }
            }
        }
    }
    a.erase(a.length() - 1, 1);
    cout << a;
    return 0;
}
