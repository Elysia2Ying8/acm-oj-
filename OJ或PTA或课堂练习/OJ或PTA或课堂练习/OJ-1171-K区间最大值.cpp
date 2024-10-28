//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e6 + 5;
//int n, k, Q;
//int a[mxn], q[mxn];
//int m[mxn];
//int hh = 1, tt = 0;
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n >> k >> Q;
//	int x = 0;
//	for (int i = 1; i <= n; ++i)cin >> a[i];
//	for (int i = 1; i <= n; ++i) {
//		if (hh <= tt && q[hh] < i - k + 1)++hh;
//		while (hh <= tt && a[q[tt]] < a[i])--tt;
//		q[++tt] = i;
//		if (i >= k)m[++x] = a[q[hh]];
//	}
//	int l;
//	while (Q--) {
//		cin >> l;
//		cout << m[l] << '\n';
//	}
//	return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e6 + 3;
//int n, k, Q, a[mxn], b[mxn];
//deque<int> q;
//int main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> n >> k >> Q;
//    for (int i = 1; i <= n; i++) cin >> a[i];
//    for (int i = 1; i <= n; i++) {
//        while (q.size() && q.back() < a[i]) q.pop_back();
//        q.push_back(a[i]);
//        if (i - k >= 1 && q.front() == a[i - k]) q.pop_front();
//        if (i >= k) b[i - k + 1] = q.front();
//    }
//    while (Q--) {
//        int x; cin >> x;
//        cout << b[x] << '\n';
//    }
//    return 0;
//}