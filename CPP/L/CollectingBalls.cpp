#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    int x[N];
    for (int i = 0; i < N; i++) {
        cin >> x[i]; 
    }
    int ans = 0;
    for (int i = 0; i < N; i++) {
        int A = x[i] * 2;
        int B = (K - x[i]) * 2;
        if (A > B) 
            ans += B;
        else 
            ans += A;
    }

    cout << ans << endl;
}