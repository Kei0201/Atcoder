#include <bits/stdc++.h>
using namespace std;

// 1人のテストの点数を表す配列から合計点を計算して返す関数
int sum(vector<int> scores) {
    int ans = 0;
    for (int i = 0; i < scores.size(); i++) {
        ans += scores.at(i);
    }
    return ans;
}


// 3人の合計点からプレゼントの予算を計算して出力する関数
void output(int sum_a, int sum_b, int sum_c) {
    int ans = sum_a * sum_b * sum_c;
    cout << ans << endl;
}


vector<int> input(int N) {
    vector<int> vec(N);
    for (int i = 0; i < N; i++) {
        cin >> vec.at(i);
    }
    return vec;
}

int main () {
    // 科目の数Nを受け取る
    int N;
    cin >> N;

    // それぞれのテストの点数を受け取る
    vector<int> A = input(N);
    vector<int> B = input(N);
    vector<int> C = input(N);

    // それぞれの合計点を計算
    int sum_A = sum(A);
    int sum_B = sum(B);
    int sum_C = sum(C);

    // プレゼントの予算を出力
    output(sum_A, sum_B, sum_C);
}