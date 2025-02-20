//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e4 + 5;
//int n, m;
//int a[mxn];
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n >> m;
//	for (int i = 1; i <= m; ++i)cin >> a[i];
//	sort(a + 1, a + 1 + m);
//	for (int i = 1; i <= m; ++i) 
//		for (int j = m; j > i; --j) 
//			if (a[i] + a[j] == n) {
//				cout << a[i] << ' ' << a[j] << '\n';
//				return 0;
//			}
//	cout << "No Solution!" << '\n';
//	return 0;
//}