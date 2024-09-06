#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a(3);
    for (int i = 0; i < 3; i++) cin >> a[i];

    int ans = 0;
    for (int i = 0; i < 3; i++) ans += 7 - a[i];
    cout << ans << endl;
}