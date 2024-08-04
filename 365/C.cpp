#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int max_value = *max_element(a.begin(), a.end());
    int count;
    for (int i = 1; i <= max_value+1; i++) {
        count = 0;
        for (int j = 0; j < n; j++) {
            if (i < a[j]) {
                count += i;
            } else {
                count += a[j];
            }
        }
        if (m < count) {
            cout << i-1 << endl;
            return 0;
        }
    }

    cout << "infinite" << endl;
    return 0;
}

// 回答
// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;

// int main () {
//     int n;
//     ll m;
//     cin >> n >> m;
//     vector<int> a(n);
//     for (auto &v: a) cin >> v;
//     ll s = accumulate(a.begin(), a.end(), 0ll);
//     if (s <= m) {
//         cout << "infinite" << endl;
//         return 0;
//     }
//     int ok = 0, ng = 1000000000;
//     while (abs(ok - ng) > 1) {
//         int mid = (ok + ng) >> 1;
//         ll tmp = 0;
//         for (auto v : a) tmp += min(mid, v);
//         if (tmp <= m) {
//             ok = mid;
//         }else {
//             ng = mid;
//         }
//     } 
//     cout << ok << endl;
// }