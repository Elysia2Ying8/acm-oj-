//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e4 + 5;
//struct ST {
//	int id;
//	bool st;
//	bool operator<(const ST& s)const {
//		return id < s.id;
//	}
//}a[mxn];
//int n;
//int b[mxn];
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n;
//	int x, y;
//	for (int i = 1; i <= n; ++i) {
//		cin >> x >> y;
//
//		cin >> a[i].id >> a[a[i].id].st;
//	}
//	int ans = 0;
//	sort(a + 1, a + 1 + n);
//	for (int i = 1; i <= n; ++i) {
//		if (!a[a[i].id].st)b[++ans] = a[i].id;
//	}
//	for (int i = 1; i <= ans; ++i)cout << b[i] << (i == ans ? '\n' : ' ');
//	if (ans == 1)cout << "Da Ben Zhong is found!" << '\n';
//	else cout << "There are " << ans << " suspects." << '\n';
//	return 0;
//}

//´íµÄ

//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5;
//int n;
//map<string, bool> id;
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	string a;
//	int b;
//	cin >> n;
//	for (int i = 1; i <= n; ++i) {
//		cin >> a >> b;
//		id[a] = b;
//	}
//	vector<string> wait_erase;
//	for (const auto& i : id) {
//		if (i.second == 0)
//			wait_erase.push_back(i.first);
//	}
//	for (const auto& i : wait_erase) {
//		id.erase(i);
//	}
//	int ans = 0;
//	for (auto i = id.begin();i!=id.end();++i) {
//		++ans;
//		cout << i->first << (next(i) == id.end() ? '\n' : ' ');
//	}
//	if (ans == 1)cout << "Da Ben Zhong is found!" << '\n';
//	else if (ans > 1)cout << "There are " << ans << " suspects." << '\n';
//	return 0;
//}