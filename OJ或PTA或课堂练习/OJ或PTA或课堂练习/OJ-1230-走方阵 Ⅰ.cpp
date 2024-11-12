//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e3 + 5;
//int n;
//int a[mxn][mxn];
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n;
//	for (int i = 1; i <= n; ++i)
//		for (int j = 1; j <= n; ++j)
//			cin >> a[i][j];
//	if (n == 1)cout << a[1][1] << '\n';
//	else {
//		for (int i = n; i >= 1; --i)
//			for (int j = i; j <= n; ++j)
//				cout << a[j - i + 1][j] << ' ';
//		for (int i = 2; i <= n; ++i)
//			for (int j = 1; j <= n - i + 1; ++j)
//				cout << a[i + j - 1][j] << (i == n ? '\n' : ' ');
//	}
//	return 0;
//}