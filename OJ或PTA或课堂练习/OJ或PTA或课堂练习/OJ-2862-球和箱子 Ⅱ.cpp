//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//#define int long long
//const int mod = 1e9 + 7;
//int t, n, m;
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
//	cin >> t;
//	while (t--) {
//		cin >> n >> m;
//		//���ܻ��и������㱬��
//		//ans = 1 - ksm(n, mod - 2) % mod;
//		//ans = ksm(ans, m) % mod;
//		//ans = n * ans % mod;
//		ans = ksm(n, mod - 2) % mod;
//		ans = (n - 1) * ans % mod;
//		ans = ksm(ans, m) % mod;
//		ans = n * ans % mod;
//		cout << ans << '\n';
//	}
//	return 0;
//}