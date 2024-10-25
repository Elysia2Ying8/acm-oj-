//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e2 + 5;
//int n, m;
//int s, v, w;
//int dp[mxn];
//signed main()
//{
//	cin >> n >> m;
//	while (n--) {
//		cin >> v >> w >> s;
//		for (int j = m; j > 0; --j) {
//			for (int k = 1; k <= s && k * v <= j; ++k) {
//				dp[j] = max(dp[j], dp[j - k * v] + k * w);
//			}
//		}
//	}
//	cout << dp[m] << endl;
//	return 0;
//}
