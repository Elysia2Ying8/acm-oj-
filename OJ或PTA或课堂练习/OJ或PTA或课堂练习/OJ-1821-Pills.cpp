//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//#define int long long
//const int mxn = 3e1 + 5;
//int n;
//int dp[mxn];
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	dp[1] = 1, dp[0] = 1;
//	for (int i = 2; i < mxn; ++i) {
//		for (int j = 0; j < i; ++j) {
//			dp[i] += dp[j] * dp[i - j - 1];
//		}
//	}
//	while (cin >> n && n) {
//		cout << dp[n] << '\n';
//	}
//	return 0;
//}