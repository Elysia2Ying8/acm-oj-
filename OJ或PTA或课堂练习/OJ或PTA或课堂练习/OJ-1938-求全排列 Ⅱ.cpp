//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//int n, k, m;
//bool st[15];
//int ans[15], path[15], x;
//void dfs(int u) {
//	if (u > n && ans[k] >= m) {
//		for (int i = 1; i < u; ++i)cout << path[i] << ' ';
//		cout << '\n';
//	}
//	for (int i = n; i; --i) {
//		if (!st[i]) {
//			path[u] = i;
//			st[i] = true;
//			ans[u] = ans[u - 1] + i;
//			dfs(u + 1);
//			st[i] = false;
//			ans[u] -= i;
//		}
//	}
//}
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	while (cin >> n >> k >> m) {
//		memset(ans, 0, sizeof ans);
//		dfs(1);
//	}
//	return 0;
//}