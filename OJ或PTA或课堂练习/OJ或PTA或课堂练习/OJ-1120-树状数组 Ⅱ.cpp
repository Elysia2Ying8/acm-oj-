//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e6 + 6;
//#define lowbit(x) (x&-x)
//int n;
//int a[mxn], b[mxn];
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n;
//	for (int i = 1; i <= n; ++i)cin >> b[i];
//	for (int i = 1; i <= n; ++i) {
//		int r = i, l = r - lowbit(r) + 1;
//		if (r >= l) {
//			a[i] += b[i];
//			r -= 1;
//		}
//		while (r >= l) {
//			a[i] -= b[r];
//			r -= lowbit(r);
//		}
//		cout << a[i] << (i == n ? '\n' : ' ');
//	}
//	return 0;
//}