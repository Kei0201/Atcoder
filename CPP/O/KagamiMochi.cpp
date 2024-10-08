#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    vector<int> d(n);
    for (int i = 0; i < n; i++) cin >> d.at(i);

    sort(d.begin(), d.end());
    reverse(d.begin(), d.end());

    int count = 1;

    for (int i = 1; i < n; i++) {
        if (d.at(i) != d.at(i-1)) {
            count++;
        }
    }

    cout << count << endl;
}