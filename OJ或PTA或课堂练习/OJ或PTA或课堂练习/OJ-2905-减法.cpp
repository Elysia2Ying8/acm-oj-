//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//string s1, s2, s;
//int t[1000];
//signed main()
//{
//	getline(cin, s1);
//	getline(cin, s2);
//	for (int i = 0; i < s2.size(); ++i)
//		t[s2[i]]++;
//	for (int i = 0; i < s1.size(); ++i) {
//		if (!t[s1[i]])
//			s += s1[i];
//	}
//	cout << s << '\n';
//	return 0;
//}



//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//string s1, s2;
//int t2[1000];
//signed main()
//{
//    getline(cin, s1);
//    getline(cin, s2);
//    for (int i = 0; i < s2.size(); ++i)
//        t2[s2[i]]++;
//    for (int i = 0; i <s1.size(); ++i) 
//        if (t2[s1[i]])s1.erase(i, 1);
//    cout << s1 << '\n';
//    return 0;
//}
//直接删会错位，这个写法错的，另外两个对的



//#include <bits/stdc++.h>
//#include<unordered_set>
//using namespace std;
//int main() {
//    string S1, S2;
//    getline(cin, S1);
//    getline(cin, S2);
//    unordered_set<char> remove_set(S2.begin(), S2.end());
//    for (char c : S1) {
//        if (remove_set.find(c) == remove_set.end()) {
//            cout << c;  
//        }
//    }
//    return 0;
//}
