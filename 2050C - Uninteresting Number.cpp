#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n2 = 0, n3 = 0, cont = 0, i = 0;
    string n;
    cin >> n;
    int arr[n.size()];
    for (char c : n){
        int aux = (c - '0');
        cont += aux;
        arr[i] = aux;
        i++;
    }
    int rest = cont%9;
    if (rest != 0){
        for (int i = 0; i < n.size(); i++){
            if (arr[i] == 2) n2++;
            else if (arr[i] == 3) n3++;
        }
        if (rest == 1 && ((n2 >= 1 && n3 >= 1) || (n2 >= 4))) cout << "YES" << endl;
        else if (rest == 3 && ((n3 >= 1) || (n2 >= 3))) cout << "YES" << endl;
        else if (rest == 5 && n2 >= 2) cout << "YES" << endl;
        else if (rest == 7 && n2 >= 1) cout << "YES" << endl;
        else if (rest == 2 && ((n3 >= 2 && n2>=2) || (n3 >= 1 && n2 >= 5) || (n2 >= 8))) cout << "YES" << endl;
        else if (rest == 4 && ((n3 >= 2 && n2>=1) || (n3 >= 1 && n2 >= 4) || (n2 >= 7))) cout << "YES" << endl;
        else if (rest == 6 && ((n3 >= 2) || (n3 >= 1 && n2 >= 3) || (n2 >= 6))) cout << "YES" << endl;
        else if (rest == 8 && ((n3 >= 1 && n2 >= 2) || (n2 >= 5))) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    else cout << "YES" << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}