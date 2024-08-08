#include <bits/stdc++.h>
using namespace std;

int main () {
    int a, b, c;
    cin >> a >> b >> c;

    int max_h, min_h;
    max_h = max(max(a,b),c);
    min_h = min(min(a,b),c);

    cout << max_h - min_h << endl;
}