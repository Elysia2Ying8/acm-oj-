//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 5e5 + 5;
//#define lowbit(x) (x&-x)
//int n, m;
//int op;
//int a[mxn];
//
//void add(int p, int v) {
//	while (p <= n) {
//		a[p] += v;
//		p += lowbit(p);
//	}
//}
//
//int sum(int p) {
//	int res = 0;
//	while (p) {
//		res += a[p];
//		p -= lowbit(p);
//	}
//	return res;
//}
//
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n >> m;
//	for (int i = 1; i <= n; ++i) {
//		int x;
//		cin >> x;
//		add(i, x);
//	}
//	while (m--) {
//		int x = 0, k = 0;
//		cin >> op >> x >> k;
//		if (op == 1) {
//			add(x, k);
//		}
//		else {
//			cout << sum(k) - sum(x - 1) << '\n';
//		}
//	}
//	return 0;
//}