#include <bits/stdc++.h>
using namespace std;

int main () {
    int N;
    cin >> N;
    int l[N];
    int r[N];

    for (int i = 0; i < N; i++) {
        cin >> l[i] >> r[i];
    }

    int ans = 0;
    
    for (int i = 0; i < N; i++) {
        ans += r[i] - l[i] + 1;
    }

    cout << ans << endl;
}