//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 5e5 + 5;
//int n;
//int p[mxn], ans[mxn];
//int k;
//int num[mxn];
//int find(int x) {
//	if (p[x] != x)p[x] = find(p[x]);
//	return p[x];
//}
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n;
//	for (int i = 1; i <= n; ++i)ans[i] = 1;
//	for (int i = 1; i <= n; ++i) {
//		cin >> p[i];
//		if (p[i] == -1)p[i] = i, ++k, num[k] = i;
//	}
//	cout << k << '\n';
//	for (int i = 1; i <= n; ++i) {
//		if (p[find(i)] != i)ans[find(i)] += ans[i];
//	}
//	for (int i = 1; i <= k; ++i) {
//		cout << num[i] << ' ' << ans[num[i]] << '\n';
//	}
//	return 0;
//}