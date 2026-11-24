#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<string> v;    
    for (int i = 0; i < n; i++){
        int p;
        vector<string> vs;
        cin >> p;
        for(int j = 0; j < p; j++){
            string s;
            cin >> s;
            vs.push_back(s);
        }
        sort(vs.begin(), vs.end());
        if (i == 0) v.push_back(vs[0]);
        else {
            string aux = v.back();
            for (int j = 0; j < vs.size(); j++){
                if (vs[j] >= aux){
                    v.push_back(vs[j]);
                    break;
                } else if (j == vs.size() - 1){
                    cout << "impossible";
                    return;
                }
            }
        }
    }
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}