////#define  _CRT_SECURE_NO_WARNINGS
////#include<bits/stdc++.h>
////using namespace std;
////const int mxn = 1e4 + 5;
////int k, a[mxn], b[mxn];
////signed main()
////{
////	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
////	while (cin >> k && k) {
////		int l = 0, r = 0, x = 0;
////		int mx = 0xc0c0c0c0, mn = 0x3f3f3f3f;
////		memset(b, 0, sizeof b);
////		for (int i = 1; i <= k; ++i) {
////			cin >> a[i], b[i] = b[i - 1] + a[i];
////			if (a[i] < 0)++x;
////		}
////
////		if (x == k) {
////			cout << 0 << ' ' << a[1] << ' ' << a[k] << '\n';
////			continue;
////		}
////
////		for (int i = 1; i <= k; ++i)
////			if (b[i] >= mx) {
////				if (b[i] >= 0 && a[i] != 0)mx = b[i], r = i;
////				else if (b[i] < 0 && a[i] == 0)mx = b[i], r = i;
////			}
////		for (int i = r - 1; i >= 0; --i)
////			if (mn > b[i] && b[i] < 0)mn = b[i], l = i;
////		cout << b[r] - b[l] << ' ' << a[l + 1] << ' ' << a[r] << '\n';
////	}
////	return 0;
////}
 
 
 

//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e4 + 5, inf = 0xc0c0c0c0;
//int n, a[mxn];
//int main() {
//    while (scanf("%d", &n) == 1 && n) {
//        for (int i = 1; i <= n; ++i) scanf("%d", a + i), a[i] += a[i - 1];
//        int p = 0, ans = inf, l, r;  // 初始化，sum(0)最小
//        for (int i = 1; i <= n; ++i) { // 按类别讨论，最小值具有单调性，即p是变大
//            if (ans < a[i] - a[p]) ans = a[i] - a[p], l = p + 1, r = i;
//            if (a[i] < a[p]) p = i;  // 找字典序最小区间，不能使用 <=
//        }
//        if (ans < 0) ans = 0, l = 1, r = n;
//        printf("%d %d %d\n", ans, a[l] - a[l - 1], a[r] - a[r - 1]);
//    }
//    return 0;
//}