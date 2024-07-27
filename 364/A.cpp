#include <bits/stdc++.h>
using namespace std; 

int main () {
    int N;
    cin >> N;
    string S[N];
    bool s_bool = false;
    int count = 0;
    for (int i= 0; i < N; i++) {
        cin >> S[i];
    }

    int count2 = 0;


    for (int i = 0; i < N; i++) {
        if (S[i] == "sweet" && s_bool == false) {
            s_bool = true;
        } else if (S[i] == "sweet" && s_bool == true){
            if (i != N-1) {
                count += 1;
            }
        } else {
            s_bool = false;
        }
    }

    if (count > 0) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
}