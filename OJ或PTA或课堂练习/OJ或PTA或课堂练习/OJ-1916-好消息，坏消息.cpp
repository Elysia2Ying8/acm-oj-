//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//#define int long long
//const int mxn = 2e6 + 10;
//int n;
//int a[mxn];
//deque<int> q;
//int ans;
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n;
//	for (int i = 1; i <= n; ++i) {
//		cin >> a[i];
//		a[i + n] = a[i];
//	}
//	for (int i = 1; i < 2 * n; ++i)
//		a[i] += a[i - 1];
//	q.push_back(0);
//	for (int i = 1; i < 2 * n; ++i) {
//		while (q.size() && q.front() <= i - n)q.pop_front();
//		while (q.size() && a[i] < a[q.back()])q.pop_back();
//		q.push_back(i);
//		if (i >= n && a[q.front()] - a[i - n] >= 0)++ans;
//	}
//	cout << ans << '\n';
//	return 0;
//}