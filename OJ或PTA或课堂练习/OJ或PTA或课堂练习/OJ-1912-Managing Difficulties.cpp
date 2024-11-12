//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//#define int long long
//const int mxn = 2e3 + 5;
//int t, n, a[mxn];
//map<int, int> mp;
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> t;
//	while (t--) {
//		int ans = 0;
//		mp.clear();
//		cin >> n;
//		for (int i = 1; i <= n; ++i) {
//			cin >> a[i];
//			ans += mp[a[i]];
//			//a[k]=2*a[i]-a[j]
//			//j,i,k
//			for (int j = i - 1; j > 0; --j)
//				mp[a[i] * 2 - a[j]]++;
//		}
//		cout << ans << '\n';
//	}
//	return 0;
//}