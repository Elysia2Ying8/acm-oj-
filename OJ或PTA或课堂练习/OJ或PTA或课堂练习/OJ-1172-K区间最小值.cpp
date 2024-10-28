//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e6 + 6;
//int n, k, Q;
//int a[mxn], m[mxn];
//deque<int> q;
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n >> k >> Q;
//	for (int i = 1; i <= n; ++i)cin >> a[i];
//	for (int i = 1; i <= n; ++i) {
//		while (q.size() && q.back() > a[i])q.pop_back();
//		q.push_back(a[i]);
//		if (i > k && q.front() == a[i - k])q.pop_front();
//		if (i >= k)m[i] = q.front();
//	}
//	while (Q--) {
//		int r;
//		cin >> r;
//		cout << m[r] << '\n';
//	}
//	return 0;
//}