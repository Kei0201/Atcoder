#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int max_value = *max_element(a.begin(), a.end());
    int count;
    for (int i = 1; i <= max_value+1; i++) {
        count = 0;
        for (int j = 0; j < n; j++) {
            if (i < a[j]) {
                count += i;
            } else {
                count += a[j];
            }
        }
        if (m < count) {
            cout << i-1 << endl;
            return 0;
        }
    }

    cout << "infinite" << endl;
    return 0;
}