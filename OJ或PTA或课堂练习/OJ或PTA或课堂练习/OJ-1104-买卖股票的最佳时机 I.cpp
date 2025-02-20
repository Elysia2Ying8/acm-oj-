//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5;
//int n, a[mxn];
//int ans, dp[mxn];
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n;
//	for (int i = 1; i <= n; ++i)cin >> a[i];
//	ans = a[1];
//	for (int i = 2; i <= n; ++i) {
//		if (a[i] < ans)ans = a[i];
//		dp[i] = max(a[i] - ans, dp[i - 1]);
//	}
//	cout << dp[n] << '\n';
//	return 0;
//}