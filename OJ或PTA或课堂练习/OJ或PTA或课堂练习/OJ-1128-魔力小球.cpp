//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5, LOG = 20;
//int n, q;
//int a[mxn], id[mxn];
//int m[mxn];
////LOG跳的次数
//int dp[mxn][LOG];
//
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n >> q;
//	for (int i = 1; i <= n; ++i)cin >> a[i], id[a[i]] = i;
//	for (int i = 1; i <= n; ++i)cin >> m[a[i]];//编号
//	//跳错了。仅记录的是i位置小球的跳的距离
//	//没记录前面的小球跳到这里接着跳的情况
//	for (int i = 1; i <= n; ++i) {
//		for (int j = 0; j < LOG; ++j) {
//			dp[i][j] = i + (m[a[i]] << j);
//		}
//	}
//
//	while (q--) {
//		int num, k;
//		cin >> num >> k;
//		int op = 0, x = 0, ed = 0;
//		for (int i = 0, j = 1; j <= k; ++i, j << 1) {
//			if (i > 0)
//				ed = dp[ed][i - 1];
//			else ed = dp[num][i];
//			if (ed > n)op = true; break;
//			x = k - j;
//		}
//		if (x)ed += x * m[num];
//		if (op||ed>n)cout << -1 << '\n';
//		else cout << ed << '\n';
//	}
//	return 0;
//}



//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 6, LOG = 20;
//int n, q;
//int a[mxn], id[mxn];
//int m[mxn];
//int dp[mxn][LOG];
//
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n >> q;
//	for (int i = 1; i <= n; ++i)cin >> a[i], id[a[i]] = i;
//	for (int i = 1; i <= n; ++i)cin >> m[i];
//	for (int i = 1; i <= n; ++i)dp[i][0] = i + m[a[i]] > n ? n + 1 : i + m[a[i]];
//	for (int i = 0; i < LOG; ++i)dp[n + 1][i] = n + 1;
//	for (int j = 1; j < LOG; ++j)
//		for (int i = 1; i <= n; ++i)
//			dp[i][j] = dp[dp[i][j - 1]][j - 1];
//	while (q--) {
//		int num, k;
//		cin >> num >> k;
//		num = id[num];
//		int ans = 0;
//		while (k) {
//			if (k & 1)num = dp[num][ans];
//			k >>= 1, ++ans;
//		}
//		cout << (num <= n ? a[num] : -1) << '\n';
//	}
//	return 0;
//}