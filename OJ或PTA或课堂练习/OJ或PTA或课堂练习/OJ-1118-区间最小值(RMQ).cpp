//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5, LOG = 20;
//int n, q;
//int st[mxn][LOG];
//
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n >> q;
//	for (int i = 1; i <= n; ++i)cin >> st[i][0];
//	for (int j = 1; j < LOG; ++j)
//		for (int i = 1; i + (1 << j) - 1 <= n; ++i)
//			st[i][j] = min(st[i][j - 1], st[i + (1 << j - 1)][j - 1]);
//	while (q--) {
//		int l, r;
//		cin >> l >> r;
//		int len = r - l + 1;
//		int k = 0;
//		while ((1 << k) <= len)++k;
//		--k;
//		int ans = min(st[l][k], st[r - (1 << k) + 1][k]);
//		cout << ans << '\n';
//	}
//	return 0;
//}