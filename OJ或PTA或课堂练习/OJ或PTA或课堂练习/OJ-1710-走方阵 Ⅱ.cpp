//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e3 + 5;
//int n;
//int g[mxn][mxn];
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n;
//	for (int i = 1; i <= n; ++i)
//		for (int j = 1; j <= n; ++j)
//			cin >> g[i][j];
//	cout << g[1][n];
//	for (int i = n - 2; i >= 2 - n; i -= 2) {
//		int a = 1, b = i;
//		while (b <= n) {
//			if (a >= 1 && a <= n && b >= 1 && b <= n)
//				cout << ' ' << g[a][b];
//			++a, ++b;
//		}
//	}
//	for (int i = n - 1; i >= 3 - n; i -= 2) {
//		int a = 1, b = i;
//		while (b <= n) {
//			if (a >= 1 && a <= n && b >= 1 && b <= n)
//				cout << ' ' << g[a][b];
//			++a, ++b;
//		}
//	}
//	return 0;
//}