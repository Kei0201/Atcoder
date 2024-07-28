#include <bits/stdc++.h>
using namespace std;

int main () {
    int A, B;
    cin >> A >> B;
    string str;
    vector<int> nums;
    string str_rev;

    while (A <= B) {
        str = to_string(A);
        str_rev = str;
        reverse(str_rev.begin(), str_rev.end());
        if (str == str_rev) {
            nums.push_back(stoi(str));
        }
        A++;    
    }
    cout << nums.size() << endl;
}