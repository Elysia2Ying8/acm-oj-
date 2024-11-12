//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//int n, m, ans;
//int check(int x) {
//	int sum = 0;
//	for (int i = 1; i < x; ++i) 
//		if (x % i == 0)sum += i;
//	ans += sum == x;
//	return sum == x;
//}
//void print(int x) {
//	cout << x << " = 1";
//	for (int i = 2; i < x; ++i) {
//		if (x % i == 0)cout << " + " << i;
//	}
//	cout << '\n';
//}
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n >> m;
//	for (int i = n; i <= m; ++i) 
//		if (check(i))print(i);
//	if (ans == 0)cout << "None" << '\n';
//	return 0;
//}