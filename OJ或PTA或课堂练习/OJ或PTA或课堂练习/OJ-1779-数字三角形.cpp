//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e2 + 5;
//int n;
//int dp[mxn][mxn];
//int mx;
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n;
//	for (int i = 1; i <= n; ++i) 
//		for (int j = 1; j <= i; ++j)
//			cin >> dp[i][j];
//	for (int i = 2; i <= n; ++i) 
//		for (int j = 1; j <= i; ++j) {
//			if (j == 1)dp[i][j] += dp[i - 1][j];
//			else if (j == i)dp[i][j] += dp[i - 1][j - 1];
//			else dp[i][j] += max(dp[i - 1][j], dp[i - 1][j - 1]);
//		}
//	if (n & 1)mx = dp[n][n / 2 + 1];
//	else mx = max(dp[n][n / 2], dp[n][n / 2 + 1]);
//	cout << mx << '\n';
//	return 0;
//}