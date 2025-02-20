//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//int n;
//void print(int x) {
//	for (int i = 1; i <= x; ++i) {
//		for (int j = 1; j <= n - i; ++j)cout << ' ';
//		for (int j = 1; j <= 2 * i - 1; ++j)cout << '*';
//		cout << '\n';
//	}
//	for (int i = x - 1; i >= 1; --i) {
//		for (int j = 1; j <= n - i; ++j)cout << ' ';
//		for (int j = 1; j <= 2 * i - 1; ++j)cout << '*';
//		cout << '\n';
//	}
//}
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n;
//	int x = 0;
//	for (int i = 1; i <= n; ++i) {
//		++x;
//		for (int j = 1; j <= x; ++j)print(j);
//		for (int j = x - 1; j >= 1; --j)print(j);
//	}
//	
//	for (int i = n - 1; i >= 1; --i) {
//		--x;
//		for (int j = 1; j <= x; ++j)print(j);
//		for (int j = x - 1; j >= 1; --j)print(j);
//	}
//	return 0;
//}