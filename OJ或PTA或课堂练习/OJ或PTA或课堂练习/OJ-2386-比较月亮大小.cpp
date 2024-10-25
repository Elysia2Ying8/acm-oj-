//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//int n;
//int a[10000];
//bool op;
//signed main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; ++i)cin >> a[i];
//	if (n == 1) {
//		if (a[n] == 15)op = false;
//		else if (a[n] == 0)op = true;
//		else {
//			cout << -1 << '\n';
//			return 0;
//		}
//	}
//	else {
//		if (a[n] > a[n - 1]) {
//			if (a[n] == 15)op = false;
//			else op = true;
//		}
//		else {
//			if (a[n] == 0)op = true;
//			else op = false;
//		}
//	}
//	if (op)cout << "UP" << '\n';
//	else cout << "DOWN" << '\n';
//	return 0;
//}