//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//#define int long long 
//const int mod = 1e9 + 7;
//int n, s;
//int ans;
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
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n >> s;
//	int t = ksm(s, mod - 2) % mod;
//	for (int k = 1; k <= s; ++k) {
//		ans = (ans + k * (ksm(k * t % mod, n) - ksm((k - 1) * t % mod, n) + mod) % mod) % mod;
//	}
//	cout << ans << '\n';
//	return 0;
//}