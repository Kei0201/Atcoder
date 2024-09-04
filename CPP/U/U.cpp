#include <bits/stdc++.h>
using namespace std; 

int f(int x) {
    x = x * 2; // 2. xを2倍
    return x; // 3. xの値を返す
}

int g(int &x) {
    x *= 2; // xを2倍（参照によって"呼び出す側の変数"が変更される）
    return x;
}

// int main() {
    // int a = 3;
    // int &b = a; // bは変数aの参照

    // cout << "a: " << a << endl; // aの値を出力
    // cout << "b: " << b << endl; // bの参照先の値を出力（aの値である3が出力される）

    // b = 4; // 参照先の値を変更（aが4になる）

    // cout << "a: " << a << endl; // aの値を出力
    // cout << "b: " << b << endl; // bの参照先の値を出力（aの値である4が出力される）

    // int a = 123;
    // int &b = a; // int型変数aへの参照

    // vector<int> v = {1, 2, 3, 4, 5};
    // vector<int> &w = v; // vector<int>型変数vへの参照

    // int &c; // 参照先が指定されていないためコンパイルエラーとなる

    // 整数の場合
    // int a = 0;
    // int &b = a;

    // b = b + 1; // a = a + 1; と同じ結果となる
    // cout << a << endl; // "1"が出力される

    // // 文字列の場合
    // string s = "apg4b";
    // string &t = s;

    // // 以下の操作で参照先のsが書き換わる
    // t.at(0) = 'A';
    // t.at(1) = 'P';
    // t.at(2) = 'G';

    // cout << s << endl; // "APG4b"が出力される
    // cout << t << endl; // "参照先のsの値"APG4b"が出力される

    // int a = 3; // 呼び出す側の変数
    // int b = f(a); // 1. aの値をfに渡し、4. 結果をbに代入
    // cout << "a: " << a << endl;
    // cout << "b: " << b << endl;

//     int a = 3; // 関数を呼び出す側の変数
//     int b = g(a); // xの参照先がaになる
//     cout << "a: " << a << endl;
//     cout << "b: " << b << endl;
// }

// 参照渡しの利点

// 関数の結果を複数返したい

// a, b, cの最大値、最小値をそれぞれminimumの参照先、maximumの参照先を代入する
// void min_and_max(int a, int b, int c, int &minimum, int &maximum) {
//     minimum = min(a, min(b, c)); // 最小値をminimumの参照先を代入
//     maximum = max(a, max(b, c)); // 最大値をmaximumの参照先に代入
// }

// int main () {
//     int minimum, maximum;
//     min_and_max(3, 1, 5, minimum, maximum); // minimum, maximumを参照渡し
//     cout << "minimum: " << minimum << endl; // 最小値
//     cout << "maximum: " << maximum << endl; // 最大値
// }

// 無駄なコピーを減らす

// 配列の先頭100要素の値の合計を計算する
int sum100(vector<int> &a) {
    int result = 0;
    for (int i = 0; i < 100; i++) {
        result += a.at(i);
    }
    return result;
}

int main() {
    vector<int> vec(10000000, 1); // 全ての要素が1の配列

    // sum100を500回呼び出す
    for (int i = 0; i < 500; i++) {
        cout << sum100(vec) << endl; // 配列のコピーが生じる
    }
}


