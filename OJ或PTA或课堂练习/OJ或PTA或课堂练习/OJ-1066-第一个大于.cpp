//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 5e5 + 5;
//int n, q, a[mxn], Q;
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n >> q;
//	for (int i = 1; i <= n; ++i)cin >> a[i];
//	for (int i = 1; i <= n; ++i) {
//		for (int j = i + 1; j <mxn ; ++j) {
//			if (a[i] < a[j]) {
//				a[i] = j;
//				break;
//			}
//		}
//	}
//	for (int i = 1; i <= q; ++i) {
//		cin >> Q;
//		cout << a[Q] << (i == q ? '\n' : ' ');
//	}
//	return 0;
//}

//³¬Ê±


//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 5e5 + 5, INF = 0x3f3f3f3f;
//int n, Q;
//int a[mxn], ans[mxn];
//stack<int> s;
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n >> Q;
//	for (int i = 1; i <= n; ++i)cin >> a[i];
//	a[n + 1] = INF, s.push(n + 1);
//	for (int i = n; i > 0; --i) {
//		while (a[s.top()] <= a[i])s.pop();
//		ans[i] = s.top();
//		s.push(i);
//	}
//	while (Q--) {
//		int x;
//		cin >> x;
//		cout << (ans[x] == n + 1 ? 0 : ans[x]) << (Q == 0 ? '\n' : ' ');
//	}
//	return 0;
//}