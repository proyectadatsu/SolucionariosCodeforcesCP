#include <bits/stdc++.h>
using namespace std;

bool comparar(const pair<int, int> &a, const pair<int, int> &b) {
    if (a.first != b.first) return a.first > b.first;
    else return a.second < b.second;
}

int main () {
    cin.tie (nullptr);
    ios::sync_with_stdio(false);
    int n, k;
    cin >> n >> k;

    vector <pair<int, int>> a(n);
    for (int i = 0; i < n; i++) cin >> a[i].first >> a[i].second;

    sort(a.begin(), a.end(), comparar);

    pair<int, int> target = a[k-1];
    int sum = 0;

    for (int i = 0; i < n; i++) {
        if (a[i].first == target.first && a[i].second == target.second) sum++;
    }
    cout << sum;
}