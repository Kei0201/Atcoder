#include <bits/stdc++.h>
using namespace std;

int main () {
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a.at(i);
    }

    int ans = 0;
    for (int i = 0; i < N; i++) {
        ans += a.at(i);
    }

    int avg = ans / a.size();

    for (int i = 0; i < N; i++) {
        if (a.at(i) <= avg) {
            cout << avg - a.at(i) << endl;;
        } else {
            cout << a.at(i) - avg << endl;
        }
    }
}