//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e6 + 5;
//char s[mxn] = { '\n' };
//void solve() {
//    int i = 0, j = 1;
//    while (s[j - 1]) {
//        if (s[j] == ' ' && (s[i] == '\n' || s[i] == ' ')) ++j;
//        else if (s[j] == '\n' && s[i] == ' ') s[i] = s[j++];
//        else if ((s[i] == ' ' || s[i] == '\n') && s[j] == ' ') ++j;
//        else s[++i] = s[j++];
//    }
//}
//signed main() {
//    scanf("%[^EOF]", s + 1);
//    solve();
//    printf("%s", s + 1);
//    return 0;
//}