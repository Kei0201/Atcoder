#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, m;   
    cin >> n >> m;
    int a[m], b[m];
    for (int i = 0; i < m; i++) {
        cin >> a[i] >> b[i];
    }
    
    int count;
    for (int i = 0; i < n; i++) {
        count = 0;
        for (int j = 0; j < m; j++) {
            if (i+1 == a[j] || i+1 == b[j]) {
                count++;
            }
        }
        cout << count << endl;
    }
}