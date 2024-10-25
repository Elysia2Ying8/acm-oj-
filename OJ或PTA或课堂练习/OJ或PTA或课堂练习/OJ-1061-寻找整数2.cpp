//#define _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e6 + 5, inf = 0xc0c0c0c0;
//int n, m, a[mxn], b[mxn];
//int dp[mxn];
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	memset(dp, inf, sizeof(dp));
//	cin >> n >> m;
//	for (int i = 1; i <= n; ++i)cin >> a[i];
//	for (int i = 1; i <= m; ++i)cin >> b[i];
//	for (int i = 1; i <= n; ++i) {
//		for (int j = i+1; j <= n; ++j) {
//			dp[a[i] + a[j]]++;
//		}
//	}
//	for (int i = 1; i <= m; ++i) {
//		if (dp[b[i]] != inf)
//			cout << "yes" << '\n';
//		else cout << "no" << '\n';
//	}
//	return 0;
//}