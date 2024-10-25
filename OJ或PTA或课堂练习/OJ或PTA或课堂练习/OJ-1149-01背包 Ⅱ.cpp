//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e3 + 5, inf = 0xc0c0c0c0;
//int n, m;
//int v[mxn], w[mxn];
//int dp[mxn][mxn];
//signed main()
//{
//	memset(dp, 0xc0, sizeof dp);
//	dp[0][0] = 0;
//	cin >> n >> m;
//	for (int i = 1; i <= n; ++i) {
//		cin >> v[i] >> w[i];
//	}
//	for (int i = 1; i <= n; ++i) {
//		for (int j = 0; j <= m; ++j) {
//			dp[i][j] = dp[i - 1][j];
//			if (v[i] <= j&&dp[i-1][j-v[i]]!=inf)
//				dp[i][j] = max(dp[i][j], dp[i - 1][j - v[i]] + w[i]);
//		}
//	}
//	if (dp[n][m] == inf)cout << "Error!" << endl;
//	else cout << dp[n][m] << endl;
//	return 0;
//}