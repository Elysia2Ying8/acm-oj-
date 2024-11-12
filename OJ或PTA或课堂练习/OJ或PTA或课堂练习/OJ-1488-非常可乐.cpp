//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e2 + 5;
//int ans;
//int v[3];
//bool vis[mxn][mxn][mxn];
//struct cola {
//	int v[3], cnt;
//};
//void bfs(){
//	cola p;
//	memset(vis, false, sizeof vis);
//	queue<cola> q;
//	p.v[0] = v[0];
//	p.v[1] = p.v[2] = 0;
//	p.cnt = 0;
//	vis[v[0]][0][0] = true;
//	q.push(p);
//	while (q.size()) {
//		p = q.front();
//		q.pop();
//		if ((p.v[0] == ans && p.v[1] == ans) || (p.v[0] == ans && p.v[2] == ans) || (p.v[1] == ans && p.v[2] == ans)) {
//			cout << p.cnt << '\n';
//			return;
//		}
//		for (int i = 0; i < 3; ++i) {
//			if (p.v[i] > 0) {
//				for (int j = 0; j < 3; ++j) {
//					auto t = p;
//					if (i == j || t.v[j] == v[j])continue;
//					int r = min(t.v[i], v[j] - t.v[j]);
//					t.v[i] -= r;
//					t.v[j] += r;
//					if (!vis[t.v[0]][t.v[1]][t.v[2]]) {
//						vis[t.v[0]][t.v[1]][t.v[2]] = true;
//						t.cnt++;
//						q.push(t);
//					}
//				}
//			}
//		}
//	}
//	cout << "NO" << '\n';
//	return;
//}
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	while (cin >> v[0] >> v[1] >> v[2] && v[0] && v[1] && v[2]) {
//		if (v[0] & 1) {
//			cout << "NO" << '\n';
//			continue;
//		}
//		ans = v[0] >> 1;
//		bfs();
//	}
//	return 0;
//}