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
//	//i��ǰ���룬j��һ������
//	for (int i = 0; i < 16; ++i)
//		for (int j = 0; j < 16; ++j)
//			dp[2][i][j] = 1;
//	//k��ǰ����
//	for (int k = 3; k <= 3 + n; ++k)
//		//ǰһ������
//		for (int i = 0; i < 16; ++i)
//			//ǰ��������
//			for (int j = 0; j < 16; ++j) {
//				if (k <= 3) {//ǰ����
//					//��ǰ����
//					for (int c = 0; c < 16; ++c) {
//						if (c != i || i != j)
//							dp[k][c][i] += dp[k - 1][i][j];
//					}
//				}
//				else {//������
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