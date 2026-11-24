#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int cont = 0;
    char input[7][4];
    for (int i = 0; i < 7; i++){
        for (int j = 0; j < 4; j++){
            cin >> input[i][j];
        }
    }
    int arr[7];
    arr[0] = (input[0][1] == '#');
    arr[1] = (input[1][0] == '#');
    arr[2] = (input[1][3] == '#');
    arr[3] = (input[3][1] == '#');
    arr[4] = (input[4][0] == '#');
    arr[5] = (input[4][3] == '#');
    arr[6] = (input[6][1] == '#');

    bitset<7> bs;
    for (int i = 0; i < 7; i++) if (arr[i]) bs.set(6-i);
    bitset<7> b[100];
    b[0] = bitset<7>("1110111");
    b[1] = bitset<7>("0010010");
    b[2] = bitset<7>("1011101");
    b[3] = bitset<7>("1011011");
    b[4] = bitset<7>("0111010");
    b[5] = bitset<7>("1101011");
    b[6] = bitset<7>("1101111");
    b[7] = bitset<7>("1010010");
    b[8] = bitset<7>("1111111");
    b[9] = bitset<7>("1111011");
    for (int i = 10; i <= 99; i++){
        b[i] = b[i%10]^b[i/10];
    }
    for (int i = 0; i <= 99; i++){
        if (bs == b[i]){
            cout << i << "\n";
            cont++;
        }
    }
    if (cont == 0) cout << "impossible";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}