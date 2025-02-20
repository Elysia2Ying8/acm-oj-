//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5;
//typedef pair<int, int> PII;
//vector<PII> tree;
//int n;
//
//void build(int l, int r) {
//	tree.push_back({ l,r });
//	if (l < r) {
//		int mid = l + r >> 1;
//		build(l, mid);
//		build(mid + 1, r);
//	}
//}
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n;
//	build(1, n);
//	sort(tree.begin(), tree.end());
//	cout << tree.end() - tree.begin() << '\n';
//	for (const auto& i : tree) {
//		cout << i.first << ' ' << i.second << '\n';
//	}
//	return 0;
//}