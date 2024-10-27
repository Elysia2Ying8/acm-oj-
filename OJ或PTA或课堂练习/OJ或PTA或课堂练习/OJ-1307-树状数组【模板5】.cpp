#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//#define lowbit(x) (x&-x)
//#define int long long
//const int mxn = 1e5 + 5;
//int a[mxn], b[mxn], c[mxn];
//int n, m;
//
//void add1(int u, int k) {
//	while (u <= n) {
//		a[u] += k;
//		u += lowbit(u);
//	}
//}
//
//void add2(int u) {
//	b[u] = 0;
//	int t = u;
//	while (t) {
//		b[u] += a[t];
//		t -= lowbit(t);
//	}
//}
//
//void add3() {
//	for (int i = 1; i <= n; ++i)b[i] += b[i - 1];
//}
//int add4(int x,int y) {
//	int res = 0;
//	for (int i = x; i <= y; ++i)res += b[i];
//	return res;
//}
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n >> m;
//	for (int i = 1; i <= n; ++i) {
//		int x;
//		cin >> x;
//		add1(i, x);
//	}
//	int op, x, k;
//	while (m--) {
//		cin >> op >> x >> k;
//		if (op == 1) {
//			add1(x, k);
//		}
//		else {
//			for (int i = 1; i <= n; ++i)add2(i);
//			add3();
//			cout << add4(x, k) << '\n';
//		}
//	}
//	return 0;
//}


//#include<bits/stdc++.h>
//using namespace std;
//
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//
//	return 0;
//}