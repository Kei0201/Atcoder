#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 1; i <= n; i++) {
        if (i <= n-k) {
            a.push_back(a[i-1]);
        }
    }

    for (int i = 0; i < a.size(); i++) {
        if (n-k <= i) {
            cout << a[i];
            cout << " ";
        }
    } 
    cout << endl;
    
}