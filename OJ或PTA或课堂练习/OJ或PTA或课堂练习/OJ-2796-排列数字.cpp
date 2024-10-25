//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//int n;
//vector<int> a;
//bool st[15];
//
//void dfs(int u) {
//	if (u > n) {
//		for (int i = 0; i < n; ++i)
//			cout << a[i] << (i == n-1 ? '\n' : ' ');
//		return;
//	}
//	for (int i = 1; i <= n; ++i) {
//		if (!st[i]) {
//			a.push_back(i);
//			st[i] = true;
//			dfs(u + 1);
//			st[i] = false;
//			a.pop_back();
//		}
//	}
//}
//
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n;
//	dfs(1);
//	return 0;
//}