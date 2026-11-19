#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int l = 0;
    while (l < n - 1 && a[l] < a[l + 1]) {
        l++;
    }

    if (l == n - 1) {
        cout << "yes\n1 1\n";
        return 0;
    }

    int r = n - 1;
    while (r > 0 && a[r] > a[r - 1]) {
        r--;
    }
    reverse(a.begin() + l, a.begin() + r + 1);
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            cout << "no\n";
            return 0;
        }
    }
    cout << "yes\n" << (l + 1) << " " << (r + 1) << "\n";
}