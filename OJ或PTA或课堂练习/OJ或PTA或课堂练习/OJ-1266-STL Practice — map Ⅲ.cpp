//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//#define int long long 
//const int mxn = 1e6 + 5;
//int t, c;
//int n, m;
//map<int, int> mp;
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> t;
//	while (t--) {
//		mp.clear();
//		cin >> c;
//		while (c--) {
//			cin >> n >> m;
//			if (mp[m])mp[m] += n;
//			else mp[m] = n;
//		}
//		int ans = 0;
//		for (auto i = mp.rbegin(); i != mp.rend(); ++i) {
//			int a = i->second, b = i->first;
//			if (a == 0)continue;
//			if (a > 0 && ans != 0)cout << '+';
//			if (a == -1 && b != 0)cout << '-';
//			if (b == 0 || (a != 1 && a != -1))cout << a;
//			if (b != 0) cout << 'x';
//			if (b != 1 && b != -1 && b != 0)cout << '^' << b;
//			++ans;
//		}
//		if (ans == 0)cout << 0;
//		cout << '\n';
//	}
//	return 0;
//}