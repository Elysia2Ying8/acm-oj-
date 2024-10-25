//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5;
//string answers[3] = { "In the same gang.","In different gangs.","Not sure yet." };
//int n, m;
//int p[mxn<<1];
//int find(int x) {
//	if (p[x] != x)p[x] = find(p[x]);
//	return p[x];
//}
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	int t;
//	cin >> t;
//	while (t--) {
//		cin >> n >> m;
//		for (int i = 1; i <= (n << 1); ++i)p[i] = i;
//		char op;
//		int a, b;
//		while (m--) {
//			cin >> op >> a >> b;
//			if (op == 'A') {
//				if (find(a) == find(b))cout << answers[0] << '\n';
//				else if (find(a + n) == find(b)) cout << answers[1] << '\n';
//				else cout << answers[2] << '\n';
//			}
//			else {
//				p[find(a + n)] = find(b);
//				p[find(b + n)] = find(a);
//			}
//		}
//	}
//	return 0;
//}