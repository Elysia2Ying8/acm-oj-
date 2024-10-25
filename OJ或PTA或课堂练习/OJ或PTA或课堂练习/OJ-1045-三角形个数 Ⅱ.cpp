//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 200;
//int n, a[mxn], ans;
//void solve() {
//    ans = 0;
//    cin >> n;
//    for (int i = 1; i <= n; ++i) cin >> a[i];
//    for (int i = 1; i <= n - 2; ++i) {
//        for (int j = i + 1; j <= n - 1; ++j) {
//            for (int k = j + 1; k <= n; ++k) {
//                if (a[i] + a[j] <= a[k]) continue;
//                if (a[j] + a[k] <= a[i]) continue;
//                if (a[k] + a[i] <= a[j]) continue;
//                ++ans;
//            }
//        }
//    }
//    cout << ans << '\n';
//}
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    int t;
//    cin >> t;
//    while (t--) solve();
//    return 0;
//}