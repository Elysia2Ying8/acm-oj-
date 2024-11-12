//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e4 + 5;
//deque<int> q;
//int k, m;
//int a[mxn];
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	while (cin >> k >> m && k && m) {
//		int sum = 0xc0c0c0c0;
//		q.clear();
//		for (int i = 1; i <= k; ++i)
//			cin >> a[i], a[i] += a[i - 1];
//		int l =0, r = 0;
//		q.push_back(0);
//		for (int i = 1; i <= k; ++i) {
//			if (i - q.front() > m)q.pop_front();
//			int ans = a[i] - a[q.front()];
//			if (sum < ans) {
//				sum = ans;
//				l = q.front() + 1, r = i;
//			}
//			while (q.size() && a[i] < a[q.back()])
//				q.pop_back();
//			q.push_back(i);
//		}
//		cout << sum << ' ' << l << ' ' << r << '\n';
//	}
//	return 0;
//}