//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5;
//int n;
//struct ST {
//	int l, r;
//	bool operator<(const ST& s)const {
//		return r < s.r;
//	}
//}a[mxn];
//int ed = 0xc0c0c0c0;
//int ans;
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n;
//	for (int i = 1; i <= n; ++i)cin >> a[i].l >> a[i].r;
//	sort(a + 1, a + 1 + n);
//	for (int i = 1; i <= n; ++i) {
//		if (ed < a[i].l) {
//			++ans;
//			ed = a[i].r;
//		}
//	}
//	cout << ans << '\n';
//	return 0;
//}