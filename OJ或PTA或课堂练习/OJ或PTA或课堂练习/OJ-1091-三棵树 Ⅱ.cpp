//#define _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e2 + 5, inf = 0xc0c0c0c0;
//int n, a[mxn];
//int dfs(int num, int sum) {
//	if (sum == 0)return 0;
//	if (num <= 0)return inf;
//	return max(dfs(num - 1, sum), dfs(num - 2, sum - 1) + a[num]);
//}
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	while (cin >> n && n) {
//		memset(a, 0, sizeof a);
//		for (int i = 1; i <= n; ++i)cin >> a[i];
//		cout << dfs(n, 3) << '\n';
//	}
//	return 0;
//}