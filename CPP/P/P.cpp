#include <bits/stdc++.h>
using namespace std;

// 関数定義
// int my_min(int x, int y) {

//     if (x < y) return x;
//     else return y;
// }

// int main () {
//     int answer = my_min(10, 5);
//     cout << answer << endl;
// }

// 返り値がないのでvoidを指定
// void hello(string  text) {
//     cout << "Hello, " << text << endl;
//     return;
// }

// int main() {
//     hello("Tom");
//     hello("C++");
// }

// 整数の入力を受け取って返す関数
// 引数なし

// int input () {
//     int x;
//     cin >> x;
//     return x;
// }

// int main () {
//     int num = input(); // 引数なし
//     cout << num + 5 << endl;
// }

// 引数の値に5を足して出力する関数
// void add5(int x) {
//     x += 5;
//     cout << x << endl;
//     return;
// }

// int main () {
//     int num = 10;
//     add5(num); // numの値は引数xにコピーされる
//     cout << num << endl; // numは10のまま
// }

// 型に&をつけると参照になる
// void change(int &n, vector<int> &vec) {
//     n = 1;
//     vec.at(0) = 1;
//     return;
// }

// int main() {
//     int x = 5;
//     vector<int> v = {10, 10, 10};

//     change(x, v);

//     cout << x << endl;
//     cout << v.at(0) << endl;

// }

// 0からnまでの和を求める関数sum
int sum(int n) {
    if (n == 0) {
        return 0;
    }
    return  n + sum(n - 1);
}

int main() {
    cout << sum(3) << endl;
}