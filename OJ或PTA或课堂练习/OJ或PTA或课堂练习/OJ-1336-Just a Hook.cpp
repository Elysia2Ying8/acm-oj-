//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//#define int long long
//const int mxn = 1e5 + 5;
//int T, n, q, t;
//
//struct Node {
//	int lazy, sum;
//}tree[mxn << 2];
//
//void push_up(int root) {
//	tree[root].sum = tree[root << 1].sum + tree[root << 1 | 1].sum;
//}
//
//void push_down(int root,int l,int r) {
//	if (tree[root].lazy == 0)return;
//	int mid = l + r >> 1;
//	tree[root << 1].sum = (mid - l + 1) * tree[root].lazy;
//	tree[root << 1 | 1].sum = (r - mid) * tree[root].lazy;
//	tree[root << 1].lazy = tree[root].lazy;
//	tree[root << 1 | 1].lazy = tree[root].lazy;
//	tree[root].lazy = 0;
//}
//
//void update(int root,int l,int r,int L,int R,int w) {
//	if (l >= L && r <= R) {
//		tree[root].sum = (r - l + 1) * w;
//		tree[root].lazy = w;
//		return;
//	}
//	push_down(root, l, r);
//	int mid = l + r >> 1;
//	if (mid >= L)
//		update(root << 1, l, mid, L, R, w);
//	if (mid < R)
//		update(root << 1 | 1, mid + 1, r, L, R, w);
//	push_up(root);
//}
//int query(int root,int l,int r,int L,int R) {
//	if (l >= L && r <= R)return tree[root].sum;
//	int mid = l + r >> 1;
//	int res = 0;
//	if (mid >= L)res += query(root << 1, l, mid, L, R);
//	if (mid < R)res += query(root << 1 | 1, mid + 1, r, L, R);
//	return res;
//}
//void solve() {
//	cin >> n >> q;
//	update(1, 1, n, 1, n, 1);
//	int x, y, z;
//	while (q--) {
//		cin >> x >> y >> z;
//		update(1, 1, n, x, y, z);
//	}
//	int res = query(1, 1, n, 1, n);
//	cout << "Case " << ++t << ": The total value of the hook is " << res << '.' << '\n';
//}
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> T;
//	while (T--) {
//		solve();
//	}
//	return 0;
//}