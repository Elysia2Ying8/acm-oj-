//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5;
//int n;
//int a[mxn];
//int q[mxn];
//int len;
//signed main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; ++i)cin >> a[i];
//	q[++len] = a[1];
//	for (int i = 2; i <= n; ++i) {
//		if (q[len] < a[i])q[++len] = a[i];
//		else *lower_bound(q + 1, q + 1 + len, a[i]) = a[i];
//	}
//	cout << len << endl;
//	return 0;
//}