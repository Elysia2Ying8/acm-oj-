//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//#define lowbit(x) (x&-x)
//#define int long long
//const int mxn = 5e5 + 5;
//int n, m;
//int a[mxn];
//
//void add(int x, int k) {
//	int t = x;
//	while (x <= n) {
//		a[x] += t * k;
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
//	int op, x, y, k;
//	cin >> n >> m;
//	for (int i = 1; i <= n; ++i) {
//		int t = 0;
//		cin >> t;
//		add(i, t);
//	}
//	while (m--) {
//		cin >> op;
//		if (op == 1) {
//			cin >> x >> k;
//			add(x, k);
//		}
//		else {
//			cin >> x >> y;
//			cout << sum(y) - sum(x - 1) << '\n';
//		}
//	}
//	return 0;
//}