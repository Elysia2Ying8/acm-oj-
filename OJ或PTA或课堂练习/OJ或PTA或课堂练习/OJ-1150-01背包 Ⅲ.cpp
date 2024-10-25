//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e3 + 5;
//int n, m;
//int v[mxn], w[mxn];
//int dp[mxn][mxn];
//bool st[mxn];
//signed main()
//{
//    cin >> n >> m;
//    for (int i = 1; i <= n; ++i) {
//        cin >> v[i] >> w[i];
//    }
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 0; j <= m; ++j) {
//            dp[i][j] = dp[i - 1][j];
//            if (v[i] <= j)
//                dp[i][j] = max(dp[i][j], dp[i - 1][j - v[i]] + w[i]);
//        }
//    }
//    for (int i = n; i > 0 && m > 0; --i) {
//        if (dp[i][m] == dp[i - 1][m - v[i]] + w[i]) {
//            st[i] = true;
//            m -= v[i];
//        }
//    }
//    for (int i = 1; i <= n; ++i)
//        cout << st[i];
//    cout << endl;
//    return 0;
//}