//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//int n, q;
//typedef pair<int, int> PII;
//void search(int l, int r,int L,int R) {
//	if (l >= L && r <= R) {
//		cout << l << ' ' << r << '\n';
//		return;
//	}
//	if (l >= r)return;
//	int mid = l + r >> 1;
//	if (mid >= L)search(l, mid, L, R);
//	if (mid < R)search(mid + 1, r, L, R);
//}
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n >> q;
//	while (q--) {
//		int l, r;
//		cin >> l >> r;
//		search(1, n, l, r);
//
//	}
//	return 0;
//}