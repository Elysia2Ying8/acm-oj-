//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 2e5 + 5;
//int n, q;
//int p[mxn];
//int find(int x) {
//	if (p[x] != x)p[x] = find(p[x]);
//	return p[x];
//}
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n >> q;
//	for (int i = 1; i <= n; ++i) {
//		cin >> p[i];
//		if (p[i] == -1)p[i] = i;
//	}
//	int op, u, v;
//	while (q--) {
//		cin >> op >> u >> v;
//		if (op == 0) {
//			cout << (find(u) == find(v) ? "Yes" : "No") << '\n';
//		}
//		else {
//			p[find(v)] = p[find(u)];
//		}
//	}
//	return 0;
//}