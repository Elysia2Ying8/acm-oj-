//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5;
//typedef pair<int, int> PII;
//vector<PII> tree;
//int t;
//int n, k;
//void build(int l, int r) {
//	tree.push_back({ l,r });
//	if (l < r) {
//		int mid = l + r >> 1;
//		build(l, mid);
//		build(mid + 1, r);
//	}
//}
//bool cmp(PII t1,PII t2) {
//	if (t1.first == t2.first)return t1.second > t2.second;
//	return t1.first < t2.first;
//}
//void search(int l, int r) {
//	if (k >= l && k <= r)cout << l << ' ' << r << '\n';
//	if (l >= r)return;
//	int mid = l + r >> 1;
//	if (k <= mid)search(l, mid);
//	else search(mid + 1, r);
//}
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> t;
//	while (t--) {
//	//	tree.clear();
//		cin >> n >> k;
//	//	build(1, n);
//	//	sort(tree.begin(), tree.end(), cmp);
//		search(1, n);
//	}
//	return 0;
//}
////不需要构建线段树，直接二分即可