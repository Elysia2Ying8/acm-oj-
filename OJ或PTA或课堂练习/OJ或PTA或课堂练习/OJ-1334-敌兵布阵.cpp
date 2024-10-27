#define  _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;
const int mxn = 5e4 + 5;
int t;
int n, a[mxn];
int tree[mxn << 2];
//用子节点更新
void push_up(int root) {
	tree[root] = tree[root << 1] + tree[root << 1 | 1];
}
//构建线段树
void build(int root, int l, int r) {
	if (l == r) {
		tree[root] = a[l];
		return;
	}
	int mid = l + r >> 1;
	build(root << 1, l, mid);
	build(root << 1 | 1, mid + 1, r);
	push_up(root);
}
//a[p]更新，触发tree更新
void update(int root, int l, int r, int p, int v) {
	if (l == r) {
		tree[root] += v;
		return;
	}
	int mid = l + r >> 1;
	if (p <= mid)update(root << 1, l, mid, p, v);
	else update(root << 1 | 1, mid + 1, r, p, v);
	push_up(root);
}
//区间查询a[L...R]
//tree[root]统计了a[l...r]
int query(int root, int l, int r, int L, int R) {
	if (L <= l && r <= R)return tree[root];
	int mid = l + r >> 1, res = 0;
	if (mid >= L)res += query(root << 1, l, mid, L, R);
	if (mid < R)res += query(root << 1 | 1, mid + 1, r, L, R);
	return res;
}

void solve() {
	int x, y;
	string op;
	cin >> n;
	for (int i = 1; i <= n; ++i)cin >> a[i];
	build(1, 1, n);
	while (cin >> op) {
		if (op[0] == 'E')break;
		cin >> x >> y;
		if (op[0] == 'Q') {
			int ans = query(1, 1, n, x, y);
			cout << ans << '\n';
		}
		else {
			if (op[0] == 'S')y = -y;
			update(1, 1, n, x, y);
			a[x] += y;
		}
	}
}
signed main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> t;
	int x = 0;
	while (t--) {
		cout << "Case " << ++x << ":\n";
		solve();
	}
	return 0;
}