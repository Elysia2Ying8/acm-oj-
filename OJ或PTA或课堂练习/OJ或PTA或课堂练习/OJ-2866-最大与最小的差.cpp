//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//#define int long long
//const int mxn = 1e5 + 5, mod = 1e9 + 7;
//int n;
//int arr[mxn];
//int ans, mx, mn;
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
//	cin >> n; 
//	for (int i = 1; i <= n; ++i)cin >> arr[i];
//	sort(arr + 1, arr + 1 + n);
//	int t = ksm(2, n) - 1;
//	t = ksm(t, mod - 2);
//	for (int i = 1; i <= n; ++i) {
//		ans = ksm(2, i - 1) * t % mod;
//		ans = ans * arr[i] % mod;
//		mx = (mx + ans) % mod;
//	}
//	for (int i = 1; i <= n; ++i) {
//		ans = ksm(2, n - i) * t % mod;
//		ans = ans * arr[i] % mod;
//		mn = (mn + ans) % mod;
//	}
//	cout << (mx - mn + mod) % mod << '\n';
//	return 0;
//}