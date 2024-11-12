//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e2 + 5;
//int t;
//int n;
//int a[mxn];
//int f[mxn][mxn];
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> t;
//	while (t--) {
//		cin >> n;
//		for (int i = 1; i <= n; ++i)cin >> a[i], a[i] += a[i - 1];
//		for (int len = 2; len <= n; ++len) {
//			for (int i = 1; i + len - 1 <= n; ++i) {
//				int j = i + len - 1;
//				f[i][j] = 0x3f3f3f3f;
//				for (int k = i; k < j; ++k) 
//					f[i][j] = min(f[i][j], f[i][k] + f[k + 1][j] + a[j] - a[i - 1]);
//			}
//		}
//		cout << f[1][n] << '\n';
//	}
//	return 0;
//}