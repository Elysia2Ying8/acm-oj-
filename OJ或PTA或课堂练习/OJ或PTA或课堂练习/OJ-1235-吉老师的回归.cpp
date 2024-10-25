//#define  _CRT_SECURE_NO_WARNINGS
//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//int n, m;
//string s;
//int ans = 1;
//string ch[2] = { "easy", "qiandao" };
//
//signed main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> n >> m;
//    int tt = n;
//    cin.ignore();
//    while (n--) {
//        getline(cin, s); 
//        if (ans <= m) {
//            ++ans;
//            continue;
//        }
//        string t;
//        bool op = false;
//        for (int i = 0; i < s.size(); ++i) {
//            if (s[i] == 'e' || s[i] == 'E') {
//                if (i + 4 <= s.size()) {
//                    t = s.substr(i, 4);  
//                    if (t[0] == 'E')t[0] = 'e';
//                    if (t == ch[0]) {
//                        op = true;
//                        break;
//                    }
//                }
//            }
//            else if (s[i] == 'q' || s[i] == 'Q') {
//                if (i + 7 <= s.size()) {
//                    t = s.substr(i, 7);  
//                    if (t[0] == 'Q')t[0] = 'q';
//                    if (t == ch[1]) {
//                        op = true;
//                        break;
//                    }
//                }
//            }
//        }
//
//        if (!op) {
//            cout << s << '\n';
//            break;
//        }
//        ++ans;
//    }
//    if (ans > tt) {
//        cout << "Wo AK le" << '\n';
//    }
//    return 0;
//}
