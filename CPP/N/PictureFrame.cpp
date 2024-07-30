#include <bits/stdc++.h>
using namespace std;

int main () {
    int h, w;
    cin >> h >> w;
    vector<string> a(h);
    for (int i = 0; i < h; i++) cin >> a[i];

    for (int i = 0; i < h+2; i++) {
        for (int j = 0; j < w+2; j++) {
            if (i == 0 || i == h+1) {
                printf("#");
            } else {
                if (j == 0 || j == w+1) {
                    printf("#");
                }else {
                    printf("%c", a[i-1][j-1]);
                }
            }
        }
        printf("\n");
    }
}