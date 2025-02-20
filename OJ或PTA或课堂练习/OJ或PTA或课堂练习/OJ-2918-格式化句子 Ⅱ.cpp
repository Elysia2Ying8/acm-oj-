//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//string s, t;
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	getline(cin, s);
//	bool st = false;
//	for (int i = 0; i < s.size(); ++i) {
//		if (s[i] != ' ') {
//			t += s[i];
//			st = true;
//		}
//		else if (s[i] == ' ') {
//			if (st) {
//				t += ' ';
//				st = false;
//			}
//		}
//	}
//	for (int i = 0; i < t.size(); ++i) {
//		if (t[i] == ' ') {
//			if ((t[i - 1] < 'a' && t[i - 1]>'Z') || t[i - 1] < 'A' || t[i - 1]>'z' || (t[i + 1] < 'a' && t[i + 1] >'Z') || t[i + 1] < 'A' || t[i + 1] > 'z')
//				t.erase(i, 1);
//		}
//	}
//	if (!t.empty() && t.back() == ' ')t.pop_back();
//	cout << t << '\n';
//	return 0;
//}
//


//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//string s, t;
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	getline(cin, s);
//	bool st = false;
//	for (int i = 0; i < s.size(); ++i) {
//		if (s[i] != ' ') {
//			if((s[i]>='a'&&s[i]<='z')||s[i]>='A'&&s[i]<='Z') {
//				t += s[i];
//				st = true;
//			}
//			else {
//				if (t.back() == ' ')
//					t.back() = s[i];
//				else t += s[i];
//				st = false;
//			}
//		}
//		else if (s[i] == ' ' && st) {
//			t += ' ';
//			st = false;
//		}
//	}
//	if (!t.empty() && t.back() == ' ')t.pop_back();
//	cout << t << '\n';
//	return 0;
//}