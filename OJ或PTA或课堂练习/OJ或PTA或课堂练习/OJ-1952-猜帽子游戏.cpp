//#define _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e2 + 5;
//int n, k;
//int hat[mxn], guess[mxn];
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n;
//	for (int i = 1; i <= n; ++i)cin >> hat[i];
//	cin >> k;
//	for (int i = 1; i <= k; ++i) {
//		int ans = 0;
//		for (int j = 1; j <= n; ++j) {
//			cin >> guess[j];
//			if (guess[j] == 0)continue;
//			else if (hat[j] == guess[j])ans = 1;
//			else {
//				ans = 0;
//				break;
//			}
//		}
//		if (ans == 1)cout << "Da Jiang!!!" << '\n';
//		else cout << "Ai Ya" << '\n';
//	}
//	return 0;
//}