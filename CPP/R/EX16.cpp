#include <bits/stdc++.h>
using namespace std;

int main () {
    vector<int> data(5);
    for (int i = 0; i < 5; i++) {
        cin >> data.at(i);
    }

    // dataの中で隣り合う等しい要素が存在するなら"YES"を出力し、そうでなければ"NO"を出力する
    int chk = -1;
    int count = 0;
    for (int x: data) {
        if (x == chk) {
            count++;
        }
        chk = x; 
    }

    if (0 < count) cout << "YES" << endl;
    else cout << "NO" << endl;
}