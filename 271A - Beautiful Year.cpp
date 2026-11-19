#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int num, c1, c2, c3, c4;
    cin >> num;
    do{
        ++num;
        c1 = num%10;
        c2 = (num/10)%10;
        c3 = (num/100)%10;
        c4 = num/1000;
    }while ((c1 == c2) || (c1 == c3) || (c1 == c4) || (c2 == c3) || (c2 == c4) || (c3 == c4));
    cout << num;
    return 0;
}