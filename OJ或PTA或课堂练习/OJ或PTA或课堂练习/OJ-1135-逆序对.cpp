//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//#define lowbit(x) (x&-x)
//#define int long long
//const int mxn = 5e5 + 6;
//int n, tree[mxn], ans;
//struct ST{
//	int w, id;
//}a[mxn];
//void add(int u) {
//	while (u <= n) {
//		tree[u] += 1;
//		u += lowbit(u);
//	}
//}
//int sum(int u) {
//	int t = 0;
//	while (u) {
//		t += tree[u];
//		u -= lowbit(u);
//	}
//	return t;
//}
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n;
//	for (int i = 1; i <= n; ++i)
//		cin >> a[i].w, a[i].id = i;
//	sort(a + 1, a + 1 + n, [](ST x, ST y) {return (x.w == y.w) ? (x.id > y.id) : (x.w > y.w); });
//	for (int i = 1; i <= n; ++i) {
//		add(a[i].id);
//		ans += sum(a[i].id - 1);
//	}
//	cout << ans << '\n';
//	return 0;
//}