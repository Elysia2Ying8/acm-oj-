//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int N = 5e2 + 5, M = 1e5 + 5;
//int n, m;
//int g[N][N];
//int d[N];
//bool st[N];
//
//void dijkstra() {
//	memset(d, 0x3f, sizeof d);
//	d[1] = 0;
//	for (int i = 1; i <= n; ++i) {
//		int t = -1;
//		for (int j = 1; j <= n; ++j) {
//			if (!st[j] && (t == -1 || d[t] > d[j]))t = j;
//		}
//		st[t] = true;
//		for (int j = 1; j <= n; ++j) {
//			d[j] = min(d[j], d[t] + g[t][j]);
//		}
//	}
//	if (d[n] == 0x3f3f3f3f) d[n] = -1;
//}
//
//signed main()
//{
//	cin >> n >> m;
//	memset(g, 0x3f, sizeof g);
//	while (m--) {
//		int a, b, c;
//		cin >> a >> b >> c;
//		g[a][b] = min(g[a][b], c);
//	}
//	dijkstra();
//	cout << d[n] << '\n';
//	return 0;
//}




//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 2e5 + 5;
//typedef pair<int, int> PII;
//int n, m;
//int h[mxn], e[mxn], w[mxn], ne[mxn], idx;
//int d[mxn];
//bool st[mxn];
//
//void add(int a,int b,int c) {
//	e[idx] = b;
//	w[idx] = c;
//	ne[idx] = h[a];
//	h[a] = idx++;
//}
//
//int dijkstra() {
//	memset(d, 0x3f, sizeof d);
//	d[1] = 0;
//	priority_queue<PII, vector<PII>, greater<PII>> heap;
//	heap.push({ 0,1 });
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
//	if (d[n] == 0x3f3f3f3f)return -1;
//	else return d[n];
//}
//
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	memset(h, -1, sizeof h);
//	cin >> n >> m;
//	while (m--) {
//		int a, b, c;
//		cin >> a >> b >> c;
//		add(a, b, c);
//	}
//	cout << dijkstra() << '\n';
//	return 0;
//}