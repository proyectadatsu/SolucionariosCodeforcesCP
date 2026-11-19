#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, p, a;
    cin >> n;
    int arr[n+1] = {0};
    for (int i = 1; i <= 2; ++i){
        cin >> p;
        for (int j = 1; j <= p; ++j){
            cin >> a;
            if (arr[a] == 0) arr[a] = 1;
        }
    }
    for (int i = 1; i <= n; ++i){
        if (arr[i] != 1){
            cout << "Oh, my keyboard!";
            return 0;
        }
    }
    cout << "I become the guy.";
    return 0;
}