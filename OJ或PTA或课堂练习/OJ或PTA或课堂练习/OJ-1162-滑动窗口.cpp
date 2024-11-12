//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e6 + 6;
//int n, k;
//int a[mxn], q[mxn];
//int hh = 1, tt = 0;
//int mx[mxn], mn[mxn];
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n >> k;
//	for (int i = 1; i <= n; ++i)cin >> a[i];
//	for (int i = 1; i <= n; ++i) {
//		if (hh <= tt && q[hh] < i - k + 1)++hh;
//		while (hh <= tt && a[q[tt]] > a[i])--tt;
//		q[++tt] = i;
//		if (i >= k)mn[i - k + 1] = a[q[hh]];
//	}
//	hh = 1, tt = 0;
//	for (int i = 1; i <= n; ++i) {
//		if (hh <= tt && q[hh] < i - k + 1)++hh;
//		while (hh <= tt && a[q[tt]] < a[i])--tt;
//		q[++tt] = i;
//		if (i >= k)mx[i - k + 1] = a[q[hh]];
//	}
//	for (int i = 1; i <= n - k + 1; ++i)cout << mn[i] << (i == n - k + 1 ? '\n' : ' ');
//	for (int i = 1; i <= n - k + 1; ++i)cout << mx[i] << (i == n - k + 1 ? '\n' : ' ');
//	return 0;
//}


//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e6 + 6;
//int n, k;
//int a[mxn];
//deque<int> q1, q2;
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n >> k;
//	for (int i = 1; i <= n; ++i)cin >> a[i];
//	for (int i = 1; i <= n; ++i) {
//		if (q1.size() && q1.front() == a[i - k])q1.pop_front();
//		while (q1.size() && q1.back() > a[i])q1.pop_back();
//		q1.push_back(a[i]);
//		if (i >= k)cout << q1.front() << (i == n ? '\n' : ' ');
//	}
//	for (int i = 1; i <= n; ++i) {
//		if (q2.size() && q2.front() == a[i - k])q2.pop_front();
//		while (q2.size() && q2.back() < a[i])q2.pop_back();
//		q2.push_back(a[i]);
//		if (i >= k)cout << q2.front() << (i == n ? '\n' : ' ');
//	}
//	return 0;
//}