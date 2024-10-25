//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e2 + 5;
//typedef pair<int, int> PII;
//int n, m;
//int g[mxn][mxn];
//int d[mxn][mxn];
//PII q[mxn * mxn];
//int bfs() {
//	int hh = 1, tt = 1;
//	memset(d, 0x3f, sizeof d);
//	d[1][1] = 0;
//	q[1] = { 1,1 };
//	int dx[4] = { -1,1,0,0 }, dy[4] = { 0,0,-1,1 };
//	while (hh <= tt) {
//		auto t = q[hh++];
//		for (int i = 0; i < 4; ++i) {
//			int x = t.first + dx[i], y = t.second + dy[i];
//			if (x >= 1 && x <= n && y >= 1 && y <= m && g[x][y] == 0 && d[x][y] == 0x3f3f3f3f) {
//				d[x][y] = d[t.first][t.second] + 1;
//				q[++tt] = { x,y };
//			}
//		}
//	}
//	return d[n][m];
//}
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n >> m;
//	for (int i = 1; i <= n; ++i) {
//		for (int j = 1; j <= m; ++j) {
//			cin >> g[i][j];
//		}
//	}
//	cout << bfs() << endl;
//	return 0;
//}