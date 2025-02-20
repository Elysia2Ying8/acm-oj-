//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e3 + 5;
//int n;
//queue<int> q;
//int now = 1;
//int t1;
//double t2;
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n;
//	int a;
//	for (int i = 1; i <= n; ++i) {
//		cin >> a;
//		q.push(a);
//	}
//	while (q.size()) {
//		int p = q.front();
//		++t1;
//		if (p == now) {
//			q.pop();
//			t2 += t1;
//			++now;
//		}
//		else {
//			q.pop();
//			q.push(p);
//		}
//	}
//	t2 /= n;
//	cout << t1 << ' ' << fixed << setprecision(1) << t2 << '\n';
//	return 0;
//}