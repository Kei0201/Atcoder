#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;

    vector<int> h(n);
    for (int i  = 0; i < n; i++) {
        cin >> h[i];
    }

    // for (int i = ; i < 100000; i++) {
    int t = 0;
    int i = 0;
    int atk = 1;
    int len = h.size();
    // }
    bool chk = true;
    while (chk) {
        t++;
        if (t % 3 == 0) atk = 3;

        if (h[i] > 0) {
            h[i] -= atk;
        } else {
            i++;
            // cout << t << endl;
            if (i == len) {
                chk = false;
            } else {
                h[i] -= atk;
            }
        }
        if (atk == 3) atk = 1;
    }

    cout << t-1 << endl;

}