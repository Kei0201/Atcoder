#include<bits/stdc++.h>
using namespace std;

// 自分 WA
// int main () {
//     int n;
//     cin >> n;

//     vector<int> h(n);
//     for (int i  = 0; i < n; i++) {
//         cin >> h[i];
//     }

//     // for (int i = ; i < 100000; i++) {
//     int t = 0;
//     int i = 0;
//     int atk = 1;
//     int len = h.size();
//     // }
//     bool chk = true;
//     while (chk) {
//         t++;
//         if (t % 3 == 0) atk = 3;

//         if (h[i] > 0) {
//             h[i] -= atk;
//         } else {
//             i++;
//             // cout << t << endl;
//             if (i == len) {
//                 chk = false;
//             } else {
//                 h[i] -= atk;
//             }
//         }
//         if (atk == 3) atk = 1;
//     }

//     cout << t-1 << endl;

// }

// 回答 不明
// int main () {
//     int n;
//     cin >> n;
//     vector<int> h(n);
//     for (auto &e : h) cin >> e;
//     int num = 0;
//     int t = 0;

//     for (int i = 0; i < n; i++) {
//         num =  h[i] / 5;
//         t += num * 3;
//         h[i] -= num * 5;
//         while (h[i] > 0) {
//             t += 1;
//             if (t % 3 == 0) {
//                 h[i] -= 3;
//             } else {
//                 h[i] -= 1;
//             }
//         }
//     }

//     cout << t << endl;
// }