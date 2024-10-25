//#define _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5;
//int n, d;
//int dp[mxn];
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n;
//	for (int i = 1; i <= n; ++i) cin >> dp[i];
//	sort(dp+1, dp+1+n);
//	d = dp[2] - dp[1];
//	for (int i = 3; i <= n; ++i)d = min(d, dp[i] - dp[i - 1]);
//	//an=a1+(n-1)d
//	if (d != 0)cout << (dp[n] - dp[1]) / d + 1 << '\n';
//	else cout << n << '\n';
//	return 0;
//}