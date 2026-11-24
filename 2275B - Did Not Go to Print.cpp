#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double


void solve(){
    ll n;
    string s;
    cin >> n >> s;
    vector<ll> mem, doc;
    for (int i = 1; i <= n; i++){
        doc.push_back(i);
    }
    ll i = 0;
    for (char c : s){
        if (c == '1'){
            mem.push_back(doc[i]);
            doc[i] = 0;
        } else if (c == '2'){
            if (!mem.empty()) mem.pop_back();
            else doc[i] = 0;
        } else{
            doc[i] = 0;
        }
        i++;
    }
    doc.insert(doc.end(), mem.begin(), mem.end());
    sort(doc.begin(), doc.end());
    int cont = doc.size();
    for (int i = 0; i < doc.size(); i++) if (doc[i] == 0) cont--;
    cout << cont << "\n";
    for (int i = 0; i < doc.size(); i++) if (doc[i] != 0) cout << doc[i] << " ";
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}