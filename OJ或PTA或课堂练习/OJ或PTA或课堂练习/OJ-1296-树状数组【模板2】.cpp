//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//#define lowbit(x) (x&-x)
//const int mxn = 5e5 + 5;
//int n, m;
//int a[mxn];
//
//void add(int x, int k) {
//	while (x <= n) {
//		a[x] += k;
//		x += lowbit(x);
//	}
//}
//
//int sum(int x) {
//	int res = 0;
//	while (x) {
//		res += a[x];
//		x -= lowbit(x);
//	}
//	return res;
//}
//
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n >> m;
//	for (int i = 1; i <= n; ++i) {
//		int x = 0;
//		cin >> x;
//		add(i, x), add(i + 1, -x);
//	}
//	int op, x, y, k;
//	while (m--) {
//		cin >> op;
//		if (op == 1) {
//			cin >> x >> y >> k;
//			add(x, k), add(y + 1, -k);
//		}
//		else {
//			cin >> x;
//			cout << sum(x) << '\n';
//		}
//	}
//	return 0;
//}