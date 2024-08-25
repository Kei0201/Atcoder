#include <bits/stdc++.h>
using namespace std;
 
// 自分 WA
// int main () {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }
//     // int count = 0;
//     bool chk = true;
//     int i = 0;
//     // for (int k = 0; k < 100; k++) {
//     while(true) {
//         sort(a.rbegin(), a.rend());
//         if (a[0] != 0) {
//             a[0]--;
//         }
//         if (a[1] != 0) {
//             a[1]--;
//         }
//         // count = reduce(begin(a), end(a));
//         i++;
//         if (count(a.begin(), a.end(), 0) == n-1) chk = false;
        
//     }
//     std::cout << i << endl;
// }

// 回答
int main () {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &e : a) cin >> e;

    int answer = 0;
    while (true) {
        // greater()で降順を設定
        sort(a.begin(), a.end(), greater());

        if (a[0] == 0 || a[1] == 0) break;

        a[0] -= 1;
        a[1] -= 1;
        answer++;
    }

    cout << answer << endl;
}