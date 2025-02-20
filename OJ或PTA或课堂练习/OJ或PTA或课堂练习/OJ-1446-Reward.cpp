//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//#define int long long 
//const int mxn = 1e6 + 6;
//int n, m, ans, sum;
//int h[mxn], e[mxn], ne[mxn], p[mxn], idx;
//int d[mxn];
//priority_queue<int, vector<int>, greater<int>> heap;
//void init() {
//	while (!heap.empty())heap.pop();
//	idx = 1, ans = 0, sum = 0;
//	for (int i = 1; i <= n; ++i) {
//		h[i] = -1, p[i] = 0, d[i] = 0;
//	}
//}
//void add(int a, int b) {
//	p[b]++;
//	e[idx] = b;
//	ne[idx] = h[a];
//	h[a] = idx++;
//}
//int topsort() {
//	for (int i = 1; i <= n; ++i) {
//		if (p[i] == 0)heap.push(i);
//	}
//	while (heap.size()) {
//		auto t = heap.top();
//		heap.pop();
//		++ans;
//		sum += d[t];
//		for (int i = h[t]; i != -1; i = ne[i]) {
//			d[e[i]] = max(d[e[i]], d[t] + 1);
//			p[e[i]]--;
//			if (p[e[i]] == 0)heap.push(e[i]);
//		}
//	}
//	return ans == n;
//}
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	while (cin >> n >> m && n&& m >= 0) {
//		init();
//		while (m--) {
//			int a, b;
//			cin >> a >> b;//a>b
//			add(b, a);//·´±ß
//		}
//		if (topsort())cout << sum + n * 888 << '\n';
//		else cout << -1 << '\n';
//	}
//	return 0;
//}