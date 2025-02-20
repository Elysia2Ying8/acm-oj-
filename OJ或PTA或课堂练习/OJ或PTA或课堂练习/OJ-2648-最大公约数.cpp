////#define  _CRT_SECURE_NO_WARNINGS
////#include<bits/stdc++.h>
////using namespace std;
////int n;
////int a, b;
////signed main()
////{
////	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
////	cin >> n;
////	while (n--) {
////		int ans = 0;
////		cin >> a >> b;
////		while (b) {
////			ans = a % b;
////			a = b;
////			b = ans;
////		}
////		cout << a << '\n';
////	}
////	return 0;
////}
//
//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//int n;
//int a, b;
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n;
//	while (n--) {
//		cin >> a >> b;
//		int ans = a % b;
//		while (ans) {
//			a = b;
//			b = ans;
//			ans = a % b;
//		}
//		cout << b << '\n';
//	}
//	return 0;
//}