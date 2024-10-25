//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//int n;
//string s, ch = { "qiao ben zhong." };
//signed main()
//{
//	cin >> n;
//	cin.ignore();
//	while (n--) {
//		
//		getline(cin, s);
//		int ans = 0;
//		for (int i = 0; s[i]; ++i) {
//			if (s[i] == ',') 
//				if (s[i - 3] == 'o' && s[i - 2] == 'n' && s[i - 1] == 'g')++ans;
//			if(s[i]=='.')
//				if (s[i - 3] == 'o' && s[i - 2] == 'n' && s[i - 1] == 'g')++ans;
//		}
//		if (ans == 2) {
//			int x = 0, y = 0;
//			for (int i = s.size() - 1; x < 3; --i) {
//				if (s[i] == ' ')++x, y = i;
//			}
//			for (int i = 0; i <= y; ++i)cout << s[i];
//			cout << ch << '\n';
//		}
//		else cout << "Skipped" << '\n';
//	}
//	return 0;
//}