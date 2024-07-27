#include <bits/stdc++.h>
using namespace std; 

int main () {
    int H, W;
    cin >> H >> W;
    string C[H];
    int S1, S2;
    cin >> S1 >> S2;
    S1--;
    S2--;
    string x;

    for (int i = 0; i < H; i++) cin >> C[i];
    cin >> x;

    for (int i = 0; i < (int)x.size(); i++) {
        if (x[i] == 'U'){
            if (C[S1-1][S2] != '#'){
                if (S1 != 0) S1--;
            }            
        } else if (x[i] == 'D') {
            if (C[S1+1][S2] != '#') {
                if (S1 != H-1) S1++;
            }
            
        } else if (x[i] == 'L') {
            if (C[S1][S2-1] != '#') {
                if (S2 != 0 ) S2--;
            }
            
        } else if (x[i] == 'R') {
            if (C[S1][S2+1] != '#'){
                if (S2 != W-1) S2++;            
            }   
        }
    }

    cout << S1 + 1 << " " << S2 + 1;
}