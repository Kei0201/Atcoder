#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int count = 0;
    int btn = 1;

    for (int i = 1; i <= n; i++) {
        if (btn == 2) break;

        if (btn == i) {
            btn = a[i-1];
            count++;
        }
    }

    if (btn == 2) cout << count << endl;
    else cout << -1 << endl;
}