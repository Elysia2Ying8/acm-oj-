//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5;
//int n, q;
//int a[mxn];
//
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n >> q;
//	for (int i = 1; i <= n; ++i)cin >> a[i];
//	sort(a + 1, a + 1 + n, [](int x, int y) {return x > y; });
//	while (q--) {
//		int x;
//		cin >> x;
//		int ans = upper_bound(a + 1, a + 1 + n, x, [](int mid, int val) {
//			return mid > val;
//			}) - a;
//		if (ans <= n)cout << a[ans] << '\n';
//		else cout << "no solution!" << '\n';
//	}
//	return 0;
//}