#include <bits/stdc++.h>
using namespace std;

int main () {
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) cin >> A[i];
    bool bool_even = true;
    int count = 0;

    while (bool_even){
        for (int j = 0; j < N; j++) {
            if (A[j] % 2 == 0) {
                A[j] /= 2;
                // count++;
                bool_even = true;
            } else {
                // std::cout << A[j] << endl;
                bool_even = false;
                break;
            }
        }
        if (bool_even) {
            count++;
        } 
    } 
    
    std::cout << count << endl;
}