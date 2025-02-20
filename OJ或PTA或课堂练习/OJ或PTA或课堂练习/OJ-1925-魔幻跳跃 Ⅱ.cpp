//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//#define int long long
//#define lowbit(x) (x&-x)
//const int mxn = 21;
//int n, m;
//int cnt[mxn], x;
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n >> m;
//	cnt[0] = 1;
//	for (int i = 1; i < mxn; ++i)cnt[i] = cnt[i - 1] * i;
//	while (m--) {
//		int ans = 0;
//		cin >> x;
//		x = n - x;
//		while (x) {
//			++ans;
//			x -= lowbit(x);
//		}
//		cout << cnt[ans] << '\n';
//	}
//	return 0;
//}