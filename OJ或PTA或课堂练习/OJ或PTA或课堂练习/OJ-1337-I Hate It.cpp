//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//#define int long long
//const int mxn = 2e5 + 5;
//int n, m;
//int tree[mxn << 2];
//int a[mxn];
//
//void push_up(int root) {
//	tree[root] = max(tree[root << 1], tree[root << 1 | 1]);
//}
//
//void build(int root,int l,int r) {
//	if (l == r) {
//		tree[root] = a[l];
//		return;
//	}
//	int mid = l + r >> 1;
//	build(root << 1, l, mid);
//	build(root << 1 | 1, mid + 1, r);
//	push_up(root);
//}
//
//void update(int root,int l,int r,int p,int w) {
//	if (l == r) {
//		tree[root] = w;
//		return;
//	}
//	int mid = l + r >> 1;
//	if (p <= mid)update(root << 1, l, mid, p, w);
//	else update(root << 1 | 1, mid + 1, r, p, w);
//	push_up(root);
//}
//
//int query(int root,int l,int r,int L,int R) {
//	if (l >= L && r <= R)return tree[root];
//	int mid = l + r >> 1;
//	int res1 = 0, res2 = 0;
//	if (mid >= L)res1 = max(res1, query(root << 1, l, mid, L, R));
//	if (mid < R)res2 = max(res2, query(root << 1 | 1, mid + 1, r, L, R));
//	return max(res1, res2);
//}
//
//void solve() {
//	while (cin >> n >> m && n && m) {
//		for (int i = 1; i <= n; ++i)cin >> a[i];
//		build(1, 1, n);
//		char op;
//		int x, y;
//		while (m--) {
//			cin >> op >> x >> y;
//			if (op == 'Q') {
//				cout << query(1, 1, n, x, y) << '\n';
//			}
//			else {
//				update(1, 1, n, x, y);
//			}
//		}
//	}
//}
//
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	solve();
//	return 0;
//}