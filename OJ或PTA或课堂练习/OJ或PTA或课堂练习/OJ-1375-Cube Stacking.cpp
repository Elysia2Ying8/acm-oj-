//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5;
//int p[mxn], dist[mxn], len[mxn];
//int find(int x) {
//	if (p[x] != x) {
//		int t = p[x];
//		p[x] = find(t);
//		dist[x] += dist[t];
//	}
//	return p[x];
//}
//
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	int t;
//	cin >> t;
//	for (int i = 0; i < mxn; ++i) {
//		p[i] = i;
//		len[i] = 1;
//	}
//	char op;
//	int x, y;
//	while (t--) {
//		cin >> op;
//		if (op == 'M') {
//			cin >> x >> y;
//			//±£´æfx£¬fy£¬·ÀÖ¹±»ÐÞ¸Ä
//			int fx = find(x), fy = find(y);
//			if (fx != fy) {
//				p[fx] = fy;
//				dist[fx] = len[fy];
//				len[fy] += len[fx];
//			}
//		}
//		else {
//			cin >> x;
//			find(x);
//			cout << dist[x] << '\n';
//		}
//	}
//	return 0;
//}