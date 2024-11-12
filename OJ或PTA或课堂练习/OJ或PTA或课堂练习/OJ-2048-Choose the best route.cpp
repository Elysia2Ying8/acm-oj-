//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 2e4 + 5, INF = 0x3f3f3f3f;
//typedef pair<int, int> PII;
//int h[mxn], e[mxn], ne[mxn], w[mxn], idx;
//int d[mxn];
//bool st[mxn];
//int n, m, s;
//void add(int a, int b, int c) {
//	e[idx] = b;
//	w[idx] = c;
//	ne[idx] = h[a];
//	h[a] = idx++;
//}
//void dijkstra(int u) {
//	memset(d, 0x3f, sizeof d);
//	memset(st, false, sizeof st);
//	priority_queue<PII, vector<PII>, greater<PII>> heap;
//	d[u] = 0;
//	heap.push({ 0,u });
//	while (heap.size()) {
//		auto t = heap.top();
//		heap.pop();
//		int distance = t.first, ver = t.second;
//		if (st[ver])continue;
//		st[ver] = true;
//		for (int i = h[ver]; i != -1; i = ne[i]) {
//			int j = e[i];
//			if (d[j] > distance + w[i]) {
//				d[j] = distance + w[i];
//				heap.push({ d[j],j });
//			}
//		}
//	}
//}
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	while (cin >> n >> m >> s && n && m && s) {
//		memset(h, -1, sizeof h);
//		idx = 0;
//		for (int i = 1; i <= m; ++i) {
//			int a, b, c;
//			cin >> a >> b >> c;
//			add(b, a, c);
//		}
//		dijkstra(s);
//		int q, t;
//		int mn = INF;
//		cin >> q;
//		while (q--) {
//			cin >> t;
//			mn = min(mn, d[t]);
//		}
//		if (mn == INF)mn = -1;
//		cout << mn << '\n';
//	}
//	return 0;
//}