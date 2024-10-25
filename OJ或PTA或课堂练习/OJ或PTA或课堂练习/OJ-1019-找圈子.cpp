//#define  _CRT_SECURE_NO_WARNINGS
////#include<bits/stdc++.h>
////using namespace std;
////const int mxn = 1e3 + 5;
////int n;
////int k, h;
////int p[mxn], ans;
////int q[mxn], idx;
////bool st[mxn];
////signed main()
////{
////	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
////	
////	cin >> n;
////	while (n--) {
////		char c;
////		cin >> k >> c;
////		while (k--) {
////			cin >> h;
////			if (!st[h]) {
////				q[++idx] = h;
////				st[h] = true;
////			}
////			p[h]++;
////		}
////	}
////	for (int i = 1; q[i]; ++i) {
////		if (p[i] > 1)++ans;
////	}
////	cout << ans << '\n';
////	return 0;
////}
////wrong
//
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e3 + 5;
//int n;
//int k, h;
//int p[mxn], q[mxn], ans;
//bool st[mxn];
//
//int find(int x) {
//	if (p[x] != x)p[x] = find(p[x]);
//	return p[x];
//}
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n;
//	for (int i = 1; i <= n; ++i)p[i] = i;
//	for (int i = 1; i <= n; ++i) {
//		char c;
//		cin >> k >> c;
//		while (k--) {
//			cin >> h;
//			if (q[h])p[find(i)] = find(q[h]);
//			else q[h] = i;
//		}
//	}
//	for (int i = 1; i <= n; ++i)
//		if (p[i] == i)++ans;
//	cout << ans << '\n';
//	return 0;
//}