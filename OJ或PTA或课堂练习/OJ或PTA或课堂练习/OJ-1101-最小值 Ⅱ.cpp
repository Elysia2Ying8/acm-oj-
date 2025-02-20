//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5, INF = 0x3f3f3f3f;
//int a[mxn];
// 分别计算该点左右两边的最小值
//int mn1[mxn], mn2[mxn];
//int n, q;
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	memset(mn1, 0x3f ,sizeof mn1);
//	memset(mn2, 0x3f, sizeof mn2);
//	cin >> n >> q;
//	for (int i = 1; i <= n; ++i) {
//		cin >> a[i];
//	}
//	mn1[1] = a[1], mn2[n] = a[n];
//	for (int i = 2; i <= n; ++i)mn1[i] = min(mn1[i - 1], a[i - 1]);
//	for (int i = n - 1; i >= 1; --i)mn2[i] = min(mn2[i + 1], a[i + 1]);
//	while (q--) {
//		int k;
//		cin >> k;
//		if (k == 1)cout << mn2[k] << '\n';
//		else if (k == n)cout << mn1[k] << '\n';
//		else cout << min(mn1[k], mn2[k]) << '\n';
//	}
//	return 0;
//}