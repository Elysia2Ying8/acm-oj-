#define  _CRT_SECURE_NO_WARNINGS

//开了好多数组
//#include<bits/stdc++.h>
//using namespace std;
//#define lowbit(x) (x&-x)
//const int mxn = 1e6 + 6;
//int n;
//int a[mxn], b[mxn], c[mxn];
// 中间为了暂存求出来的a数组，a数组拿来存add1了
//int t[mxn];
//void add1(int u, int k) {
//	while (u <= n) {
//		a[u] += k;
//		u += lowbit(u);
//	}
//}
//int add2(int u) {
//	int t = u;
//	while (t) {
//		c[u] += a[t];
//		t -= lowbit(t);
//	}
//	return c[u];
//}
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n;
//	for (int i = 1; i <= n; ++i)cin >> b[i];
//	for (int i = 1; i <= n; ++i) {
//		int r = i, l = r - lowbit(r) + 1;
//		if (r >= l) {
//			t[i] += b[i];
//			r -= 1;
//		}
//		while (r >= l) {
//			t[i] -= b[r];
//			r -= lowbit(r);
//		}
//	}
//	for (int i = 1; i <= n; ++i) {
//		add1(i, t[i]);
//	}
//	for (int i = 1; i <= n; ++i) {
//		cout << add2(i) << (i == n ? '\n' : ' ');
//	}
//	return 0;
//}


//#include<bits/stdc++.h>
//using namespace std;
//#define lowbit(x) (x&-x)
//const int mxn = 1e6 + 6;
//int n;
//int b[mxn], c[mxn];
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n;
//	for (int i = 1; i <= n; ++i)cin >> b[i];
//	for (int i = 1; i <= n; ++i) {
//		int r = i;
//		while (r) {
//			c[i] += b[r];
//			r -= lowbit(r);
//		}
//		cout << c[i] << (i == n ? '\n' : ' ');
//	}
//	return 0;
//}