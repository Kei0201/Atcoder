#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, A;
    cin >> N >> A;
    char op[N];
    int B[N];
    // ここにプログラムを追記
    for (int i = 0; i < N; i++) {
        cin >> op[i] >> B[i];
    }

    for (int i = 0; i < N; i++) {
        if (op[i] == '+') {
            A += B[i];
            cout << i+1 << ":" << A << endl;
        } else if (op[i] == '-') {
            A -= B[i];
            cout << i+1 << ":" << A << endl;
        } else if (op[i] == '*') {
            A *= B[i];
            cout << i+1 << ":" << A << endl;
        } else if (op[i] == '/' && B[i] != 0) {
            A /= B[i];
            cout << i+1 << ":" << A << endl;
        } else {
            cout << "error" << endl;
            return 0;
        }
    }
}