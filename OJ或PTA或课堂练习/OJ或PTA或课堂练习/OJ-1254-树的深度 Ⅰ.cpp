//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e6 + 6;
//int t;
//int n;
//int p[mxn];
//int h[mxn], hh[mxn];
//int dfs(int u) {
//    if (u == -1)return 1;
//    if (hh[u])return hh[u];
//    else {
//        hh[u] = 1 + dfs(p[u]);
//    }
//    return hh[u];
//}
//signed main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> t;
//    while (t--) {
//        cin >> n;
//        memset(h, 0, sizeof h);
//        memset(hh, 0, sizeof hh);
//        for (int i = 1; i <= n; ++i)cin >> p[i];
//        for (int i = 1; i <= n; ++i) {
//            h[i] = dfs(p[i]);
//        }
//        for (int i = 1; i <= n; ++i)cout << h[i] << (i == n ? '\n' : ' ');
//    }
//    return 0;
//}