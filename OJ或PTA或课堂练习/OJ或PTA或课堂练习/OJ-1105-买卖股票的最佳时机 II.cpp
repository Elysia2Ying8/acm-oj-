//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5;
//int n, a[mxn], dp[2][mxn];
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n;
//	for (int i = 1; i <= n; ++i)cin >> a[i];
//	dp[0][0] = 0xc0c0c0c0;
//	for (int i = 1; i <= n; ++i) {
//		dp[0][i] = max(dp[1][i - 1] - a[i], dp[0][i - 1]);//ÂòÈë
//		dp[1][i] = max(dp[0][i - 1] + a[i], dp[1][i - 1]);//Âô³ö
//	}
//	cout << dp[1][n] << '\n';
//	return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5;
//int n, a[mxn], sum;
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n;
//	a[0] = 0x3f3f3f3f;
//	for (int i = 1; i <= n; ++i) {
//		cin >> a[i];
//		if (a[i] > a[i - 1])sum += a[i] - a[i - 1];
//	}
//	cout << sum << '\n';
//	return 0;
//}