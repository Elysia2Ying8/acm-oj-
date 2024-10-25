//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h> 
//#define int long long
//using namespace std;
//#define lowbit(x) (x&-x)
//const int mxn = 5e5 + 5;
//int n, m, k, a[mxn], b[mxn];
//
//void add(int x, int k) {
//    int t = x;
//    while (x <= n) {
//        a[x] += k;
//        b[x] += t * k;
//        x += lowbit(x);
//    }
//}
//
//int sum(int x) {
//    int res = 0;
//    int t = x + 1;
//    while (x) {
//        res += t * a[x] - b[x];
//        x -= lowbit(x);
//    }
//    return res;
//}
//
//signed main() {
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> n >> m;
//    for (int i = 1; i <= n; i++) {
//        cin >> k;
//        add(i, k), add(i + 1, -k);
//    }
//    int op, x, y;
//    for (int i = 1; i <= m; i++) {
//        cin >> op >> x >> y;
//        if (op == 1) {
//            cin >> k;
//            add(x, k), add(y + 1, -k);
//        }
//        else {
//            cout << sum(y) - sum(x - 1) << '\n';
//        }
//    }
//}