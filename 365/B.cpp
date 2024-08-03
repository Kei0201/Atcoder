#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    int max_value = *max_element(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        if (max_value == a[i]) a[i] = 0;
    }
    // remove(a.begin(), a.end(), max_value);
    max_value = *max_element(a.begin(), a.end());

    for (int i = 0; i < n; i++) {
        if (max_value == a[i]) cout << i+1 << endl;
    }
    
}