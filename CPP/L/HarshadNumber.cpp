#include <bits/stdc++.h>
// #include <string>
using namespace std;

int main() {
    string N;
    cin >> N;
    // int s[N.size()];
    int count = 0;
    int s = stoi(N);

    for (int i = 0; i < (int)N.size(); i++) {
        // count += (int)N[i];
        count += int(N[i] - '0');    
    }

    if (s % count == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    // cout << count << endl;
    

}