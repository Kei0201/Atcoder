#include <bits/stdc++.h>
using namespace std;

int main () {
    // for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j < 3; j++) {
    //         cout << "i:" << i << ", j:" << j << endl;
    //     }
    // }

    vector<int> A(3), B(3);
    for (int i = 0; i < 3; i++) {
        cin >> A.at(i);
    }
    for (int i = 0; i < 3; i++) {
        cin >> B.at(i);
    }

    bool answer = false;

    for (int i = 0; i < A.size(); i++) {
        for (int j = 0; j < B.size(); j++) {
            if (A.at(i) == B.at(j)) answer = true;
        }
    }
 
    if (answer) cout << "YES" << endl;
    else cout << "NO" << endl;
}  