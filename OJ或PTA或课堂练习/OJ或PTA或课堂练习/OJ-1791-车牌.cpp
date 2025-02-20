//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//#define int long long
//int dp[10][20][20];
//int n;
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n;
//	//i当前号码，j上一个号码
//	for (int i = 0; i < 16; ++i)
//		for (int j = 0; j < 16; ++j)
//			dp[2][i][j] = 1;
//	//k当前数量
//	for (int k = 3; k <= 3 + n; ++k)
//		//前一个号码
//		for (int i = 0; i < 16; ++i)
//			//前两个号码
//			for (int j = 0; j < 16; ++j) {
//				if (k <= 3) {//前三个
//					//当前号码
//					for (int c = 0; c < 16; ++c) {
//						if (c != i || i != j)
//							dp[k][c][i] += dp[k - 1][i][j];
//					}
//				}
//				else {//后三个
//					for (int c = 0; c < 10; ++c) {
//						if (c != i || i != j)
//							dp[k][c][i] += dp[k - 1][i][j];
//					}
//				}
//			}
//	int ans = 0;
//	for (int i = 0; i < 16; ++i)
//		for (int j = 0; j < 16; ++j)
//			ans += dp[3 + n][i][j];
//	cout << ans << '\n';
//	return 0;
//}