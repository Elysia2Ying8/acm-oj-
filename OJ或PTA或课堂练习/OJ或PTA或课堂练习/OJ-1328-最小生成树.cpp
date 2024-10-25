//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 2e5 + 5, INF = 0x3f3f3f3f;
//struct Edge {
//	int u, v, w;
//	bool operator<(const Edge& W) {
//		return w < W.w;
//	}
//}e[mxn];
//int n, m;
//int p[mxn];
//
//int find(int x) {
//	if (p[x] != x)p[x] = find(p[x]);
//	return p[x];
//}
//
//int kruskal() {
//	int res = 0, cnt = 0;
//	for (int i = 1; i <= m; ++i) {
//		int a = e[i].u, b = e[i].v, w = e[i].w;
//		if (find(a) != find(b)) {
//			p[find(b)] = p[find(a)];
//			res += w;
//			++cnt;
//		}
//	}
//	if (cnt < n - 1)res = INF;
//	return res;
//}
//
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n >> m;
//	int a, b, w;
//	for (int i = 1; i <= m; ++i) {
//		cin >> a >> b >> w;
//		e[i] = { a,b,w };
//	}
//	sort(e + 1, e + 1 + m);
//	for (int i = 1; i <= n; ++i)p[i] = i;
//	int t = kruskal();
//	if (t == INF)cout << "orz" << '\n';
//	else cout << t << '\n';
//	return 0;
//}