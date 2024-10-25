//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e6 + 5;
//#define lowbit(x) (x&-x)
//int n;
//int a[mxn], b[mxn];
//void add(int u, int v) {
//	while (u <= n) {
//		a[u] += v;
//		u += lowbit(u);
//	}
//}
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n;
//	for (int i = 1; i <= n; ++i) {
//		int x;
//		cin >> x;
//		add(i, x);
//	}
//	for (int i = 1; i <= n; ++i) {
//		int j = i;
//		while (j >= i) {
//			b[i] += a[j];
//			j -= lowbit(j);
//		}
//		cout << b[i] << (i == n ? '\n' : ' ');
//	}
//	return 0;
//}