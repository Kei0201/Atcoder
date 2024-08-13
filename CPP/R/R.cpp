#include <bits/stdc++.h>
using namespace std;

// int main () {
//     int a;
//     cin >> a;
//     vector<int> data(5);
//     for (int i = 0; i < 5; i++) cin >> data.at(i);

//     int count = 0;
//     for (int i = 0; i < 5; i++) {
//         if (data.at(i) == a) count++;
//     }

//     cout << count << endl;
// }

// 範囲for文
// 配列のすべての要素に対して何かしらの処理を行いたいとき

int main () {
    // vector<int> a = { 1, 3, 2, 5 };
    // for (int i = 0; i < a.size(); i++) {
    //     cout << a.at(i) << endl;
    // }

    // vector<int> a = { 1, 3, 2, 5 };
    // for (int x: a) {
    //     cout << x << endl;
    // }

    string str = "hello";
    for (char c: str) {
        if (c == 'l') {
            c = 'L';
        }
        cout << c;
    }
    cout << endl;
}