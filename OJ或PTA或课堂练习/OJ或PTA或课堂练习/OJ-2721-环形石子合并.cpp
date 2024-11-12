//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 2e2 + 5;
//int n;
//int a[mxn << 1];
//int f1[mxn][mxn], f2[mxn][mxn];
//int mx = 0xc0c0c0c0, mn = 0x3f3f3f3f;
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n;
//	for (int i = 1; i <= n; ++i)cin >> a[i], a[i + n] = a[i];
//	for (int i = 1; i <= 2 * n; ++i)a[i] += a[i - 1];
//	for (int len = 2; len <= n; ++len) {
//		for (int i = 1; i + len - 1 < 2 * n; ++i) {
//			int j = i + len - 1;
//			f1[i][j] = 0x3f3f3f3f, f2[i][j] = 0xc0c0c0c0;
//			for (int k = i; k < j; ++k) {
//				f1[i][j] = min(f1[i][j], f1[i][k] + f1[k + 1][j] + a[j] - a[i - 1]);
//				f2[i][j] = max(f2[i][j], f2[i][k] + f2[k + 1][j] + a[j] - a[i - 1]);
//			}
//			if (len == n) {
//				mn = min(mn, f1[i][j]);
//				mx = max(mx, f2[i][j]);
//			}
//		}
//	}
//	if (n == 1)mn = mx = 0;
//	cout << mn << '\n' << mx << '\n';
//	return 0;
//}