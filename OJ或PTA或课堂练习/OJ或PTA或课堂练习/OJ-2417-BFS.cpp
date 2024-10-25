//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e2 + 5;
//char s[mxn];
//
//int bfs(char s[]) {
//	int i = 0;
//	while (s[i]) {
//		if (s[i] == 'b') {
//			if (s[i + 1] == 'o' && s[i + 2] == 'b')return i;
//			else ++i;
//		}
//		else ++i;
//	}
//	return -1;
//}
//
//signed main()
//{
//	cin >> s;
//	for (int i = 0; s[i]; ++i) {
//		if (s[i] >= 'A' && s[i] <= 'Z')s[i] += (int)('a' - 'A');
//	}
//	cout << bfs(s) << '\n';
//	return 0;
//}