#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    int count = 1;
    for (int i = 0; i < N; i++) {
        if (N / 2 <= i+1) {
            if (N / 2 == i+1 && (N / 2)  % 2 == 0) {
                count *= 2;
            }else 
                count += K;
        } else {
            count *= 2;
        }
    }

    cout << count << endl;
}

// 2024/07/28 WA