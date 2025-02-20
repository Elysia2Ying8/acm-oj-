//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//string s;
//int t;
//deque<char> q;
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> s >> t;
//	for (int i = 0; s[i]; ++i) {
//		while (q.size() && q.back() > s[i] && t) {
//			q.pop_back();
//			--t;
//		}
//		q.push_back(s[i]);
//	}
//	while (t) {
//		q.pop_back();
//		--t;
//	}
//	while (q.size()) {
//		cout << q.front();
//		q.pop_front();
//	}
//	return 0;
//}