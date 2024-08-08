#include <bits/stdc++.h>
using namespace std;

int main () {
    int a = 10, b = 5;

    // int answer = min(a, b);
    string s = "hello";

    // int a = min(10, s);
    // if (a < b) {
    //     answer = a;
    // } else {
    //     answer = b;
    // }

    // cout << answer << endl;
    vector<int> vec = {1,5,3};
    reverse(vec.begin(), vec.end());

    for (int i = 0; i < vec.size(); i++) {
        cout << vec.at(i) << endl;
    }
}