#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5;
//int dp[mxn];
//int t, n;
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> t;
//	while (t--) {
//		cin >> n;
//		cin >> dp[1] >> dp[2];
//		for (int i = 3; i <= n; ++i) {
//			cin >> dp[i];
//			dp[i] += max(dp[i - 3] , dp[i - 2]);
//		}
//		cout << max(dp[n],dp[n-1]) << endl;
//	}
//	return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5;
//int t, n;
//int dp[mxn][2];
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> t;
//	while (t--) {
//		cin >> n;
//		int x;
//		for (int i = 1; i <= n; ++i) {
//			cin >> x;
//			dp[i][0] = max(dp[i - 1][1], dp[i - 1][0]);
//			dp[i][1] = dp[i - 1][0] + x;
//		}
//		cout << max(dp[n][0], dp[n][1]) << endl;
//	}
//	return 0;
//}