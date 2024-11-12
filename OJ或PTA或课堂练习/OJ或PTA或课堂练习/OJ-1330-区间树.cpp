//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//#define int long long
//const int mxn = 1e5 + 5;
//int n;
//struct Node {
//	int l = -1, r = -1;
//}tree[mxn << 2];
//
//void push_up(int root) {
//	tree[root] = { tree[root << 1].l,tree[root << 1 | 1].r };
//}
//
//void build(int root,int l,int r) {
//	if (l == r) {
//		tree[root] = { l,r };
//		return;
//	}
//	int mid = l + r >> 1;
//	build(root << 1, l, mid);
//	build(root << 1 | 1, mid + 1, r);
//	push_up(root);
//}
//
//void solve() {
//	cin >> n;
//	int k = 0;
//	while (1 << k < n)++k;
//	++k;
//	cout << k << '\n';
//	build(1, 1, n);
//	int x = 1;
//	for (int i = 1; i < (1 << k); ++i) {
//		cout << i << ' ' << tree[i].l << ' ' << tree[i].r << (i + 1 == (1 << x) ? '\n' : ' ');
//		if (i + 1 == (1 << x))++x;
//	}
//}
//
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	solve();
//	return 0;
//}