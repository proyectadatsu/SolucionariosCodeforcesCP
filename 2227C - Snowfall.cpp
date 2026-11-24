#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

void solve() {
    int n;
    ll aux;
    cin >> n;
    vector<ll> dois, treis, seis, otro;
    for (int i = 0; i < n; i++){
        cin >> aux;
        if (aux%6 == 0) seis.push_back(aux);
        else if (aux%2 == 0) dois.push_back(aux);
        else if (aux%3 == 0) treis.push_back(aux);
        else otro.push_back(aux);
    }
    for (int i = 0; i < seis.size(); i++){
        cout << seis[i] << " ";
    }
    for (int i = 0; i < dois.size(); i++){
        cout << dois[i] << " ";
    }
    for (int i = 0; i < otro.size(); i++){
        cout << otro[i] << " ";
    }
    for (int i = 0; i < treis.size(); i++){
        cout << treis[i] << " ";
    }
    cout << "\n";

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}