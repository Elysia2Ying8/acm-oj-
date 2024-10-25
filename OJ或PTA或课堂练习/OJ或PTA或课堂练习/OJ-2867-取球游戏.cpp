//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//#define int long long 
//const int mod = 1e9 + 7;
//int n, m;
//
//int ksm(int a, int b) {
//	int result = 1;
//	a %= mod;
//	while (b) {
//		if (b & 1)result = result * a % mod;
//		a = a * a % mod;
//		b >>= 1;
//	}
//	return result;
//}
//
//int solve(int a, int b) {
//	if (n - 1 <= m)return n;
//	int res = 0;
//	for (int k = 1; k <= m; ++k) {
//		int t = ksm(n - m + k, mod - 2) % mod;
//		res = ((2 * k + 2) * t % mod + ((n - m + k - 2) % mod * (1 + res)) % mod * t % mod) % mod;
//	}
//	return res;
//}
//
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n >> m;
//	cout << solve(n, m) << '\n';
//	return 0;
//}