//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5, LOG = 20;
//int n, k, q;
//int st[mxn][LOG];
//
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n >> k >> q;
//	for (int i = 1; i <= n; ++i)cin >> st[i][0];
//	for (int j = 1; j < LOG; ++j)
//		for (int i = 1; i + (1 << j) - 1 <= n; ++i)
//			st[i][j] = min(st[i][j - 1], st[i + (1 << j - 1)][j - 1]);
//	while (q--) {
//		int s;
//		cin >> s;
//		cout << st[s][k] << '\n';
//	}
//	return 0;
//}