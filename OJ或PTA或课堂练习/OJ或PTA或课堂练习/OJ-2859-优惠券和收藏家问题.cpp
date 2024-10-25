//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//#define int long long
//const int md = 1e9 + 7;
//int n;
//int sum;
//
//int ksm(int a, int b) {
//	int result = 1;
//	a %= md;
//	while (b) {
//		if (b & 1) {
//			result = (result * a) % md;
//		}
//		a = (a * a) % md;
//		b >>= 1;
//	}
//	return result;
//}
//
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n;
//	for (int i = 1; i <= n; ++i) {
//		sum = (sum + ksm(i, md - 2) ) % md;
//	}
//	sum = n * sum % md;
//	cout << sum << '\n';
//	return 0;
//}