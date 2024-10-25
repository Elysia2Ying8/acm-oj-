//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 20;
//int n;
//char g[mxn][mxn];
//bool col[mxn], dg[mxn], udg[mxn];
//
//void dfs(int u) {
//	if (u > n) {
//		for (int i = 1; i <= n; ++i) {
//			for (int j = 1; j <= n; ++j) {
//				cout << g[i][j];
//			}
//			cout << '\n';
//		}
//		cout << '\n';
//		return;
//	}
//
//	for (int i = 1; i <= n; ++i) {
//		if (!col[i] && !dg[u + i - 1] && !udg[n - u + i]) {
//			g[u][i] = 'Q';
//			col[i] = dg[u + i - 1] = udg[n - u + i] = true;
//			dfs(u + 1);
//			col[i] = dg[u + i - 1] = udg[n - u + i] = false;
//			g[u][i] = '.';
//		}
//	}
//}
//
//signed main()
//{
//	cin >> n;
//	memset(g, '.', sizeof g);
//	dfs(1);
//	return 0;
//}