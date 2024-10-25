//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e6 + 6;
//int n;
//int a[mxn];
//int m;
//int x, y, z;
//int b[mxn];
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n;
//	for (int i = 1; i <= n; ++i) {
//		cin >> a[i];
//		b[i] += a[i], b[i + 1] -= a[i];
//	}
//	cin >> m;
//	while (m--) {
//		cin >> x >> y >> z;
//		b[x] += z, b[y + 1] -= z;
//	}
//	for (int i = 1; i <= n; ++i) {
//		a[i] = a[i - 1] + b[i];
//		cout << a[i] << '\n';
//	}
//	return 0;
//}