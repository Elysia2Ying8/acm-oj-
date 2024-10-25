//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5, LOG = 20;
//int n, q;
//int l, r;
//int st[mxn][LOG];
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n >> q;
//	for (int i = 1; i <= n; ++i)cin >> st[i][0];
//	for (int j = 1; j < LOG; ++j)
//		for (int i = 1; i + (1 << j) - 1 <= n; ++i)
//			st[i][j] = max(st[i][j - 1], st[i + (1 << j - 1)][j - 1]);
//	while (q--) {
//		cin >> l >> r;
//		int len = r - l + 1;
//		//int k = 1;
//		//while (k <= len)k <<= 1;
//		int k = 0;
//		while ((1 << k) <= len)++k;
//		int ans = max(st[l][k - 1], st[r - (1 << k - 1) + 1][k - 1]);
//		cout << ans << '\n';
//	}
//	return 0;
//}