#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    vector<bool> b(3, false);
    b[x] = true;
    b[y] = true;
    if (x == y) {
        cout << x << endl;
        return 0;
    }

    for (int i = 0; i < 3; i++) {
        if (b[i] == false) {
            cout << i << endl;
            return 0;
        }
        
    }
}