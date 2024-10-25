//#define _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e1 + 5;
//int n, x = 1;
//int vis[mxn];
//int path[mxn];
//void print() {
//	for (int i = 1; i <= n; ++i)
//		cout << path[i] << ' ';
//	cout << path[1] << '\n';
//}
//void dfs(int ans,int num) {
//	vis[ans] = 1;
//	path[num] = ans;
//	if (num == n) {
//		print();
//	}
//	for (int i = 1; i <= n; ++i) {
//		if (vis[i])continue;
//		dfs(i, num + 1);
//	}
//	vis[ans] = 0;
//}
//
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n;
//	for (int i = 2; i <= n; ++i)x *= i;
//	cout << x << '\n';
//	for (int i = 1; i <= n; ++i) {
//		memset(path, 0, sizeof(path));
//		dfs(i, 1);
//	}
//	return 0;
//}

//dfs