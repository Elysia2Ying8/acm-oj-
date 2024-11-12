//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 2e3 + 5;
//struct ILL {
//	int priority;
//	int id;
//	bool operator<(const ILL& I)const {
//		if (priority == I.priority)return id > I.id;
//		return priority < I.priority;
//	}
//};
//priority_queue<ILL> q[4];
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	int n;
//	string op;
//	int a, b;
//	while (cin >> n && n) {
//		for (int i = 1; i <= 3; ++i) {
//			while (!q[i].empty())q[i].pop();
//		}
//		int k = 0;
//		for (int i = 1; i <= n; ++i) {
//			cin >> op;
//			if (op == "IN") {
//				cin >> a >> b;
//				q[a].push({ b,++k });
//			}
//			else {
//				cin >> a;
//				if (q[a].empty())cout << "EMPTY" << '\n';
//				else {
//					cout << q[a].top().id << '\n';
//					q[a].pop();
//				}
//			}
//		}
//	}
//	return 0;
//}