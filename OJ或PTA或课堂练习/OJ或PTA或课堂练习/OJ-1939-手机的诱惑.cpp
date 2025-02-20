//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 100;
//typedef pair<int, int> PII;
//char g[mxn][mxn];
//int d[mxn][mxn];
//PII q[mxn * mxn];
//int n, m, t;
//int u1, z1, u2, z2;
//
//void bfs() {
//	int hh=1, tt = 1;
//	q[1] = { u1,z1 };
//	memset(d, -1, sizeof d);
//	d[u1][z1] = 0;
//	int dx[4] = { -1,1,0,0 }, dy[4] = { 0,0,-1,1 };
//	while (hh <= tt) {
//		auto t = q[hh++];
//		for (int j = 0; j < 4; ++j) {
//			int x = t.first + dx[j], y = t.second + dy[j];
//			if (x > 0 && y > 0 && x <= n && y <= m && g[x][y] != 'X' && d[x][y] == -1) {
//				d[x][y] = d[t.first][t.second] + 1;
//				q[++tt] = { x,y };
//			}
//		}
//	}
//	bool flag = false;
//	if (d[u2][z2] <= t)flag = true;
//	cout << (flag ? "YES" : "NO") << '\n';
//}
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	while (cin >> n >> m >> t && (n || m || t) ){
//		for (int i = 1; i <= n; ++i) 
//			for (int j = 1; j <= m; ++j) {
//				cin >> g[i][j];
//				if (g[i][j] == 'S')u1 = i, z1 = j;
//				else if (g[i][j] == 'D')u2 = i, z2 = j;
//			}
//		bfs();
//	}
//	return 0;
//}