#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    char S[N];
    
    for (int i = 0; i < N; i++) {
        cin >> S[i];
    }

    int count = 0;

    bool p_bool, w_bool, g_bool, y_bool;
    p_bool = w_bool = g_bool = y_bool = true;
    for (int i = 0; i < N; i++) {
        if (S[i] == 'P' && p_bool == true) {
            count++;
            p_bool = false;
        } else if (S[i] == 'W' && w_bool == true) {
            count++;
            w_bool = false;
        } else if (S[i] == 'G' && g_bool == true) {
            count++;
            g_bool = false;
        } else if (S[i] == 'Y' && y_bool == true) {
            count++;
            y_bool = false;
        }

        if (count == 4) {
            break;
        }
    }

    if (count == 3) {
        cout << "Three" << endl;
    } else if (count == 4) {
        cout << "Four" << endl;
    }

}