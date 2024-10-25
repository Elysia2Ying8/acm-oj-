//#define  _CRT_SECURE_NO_WARNINGS
//#include <bits/stdc++.h>
//using namespace std;
//const int mxn = 5e5 + 5, inf = 0xc0c0c0c0;
//int n, q, a[mxn], ans[mxn];
//stack<int> s;
//int main() {
//    scanf("%d%d", &n, &q);
//    for (int i = 1; i <= n; ++i) scanf("%d", a + i);
//    a[n + 1] = inf, s.push(n + 1);
//    for (int i = n; i > 0; --i) {
//        while (a[s.top()] >= a[i]) s.pop();
//        ans[i] = s.top();
//        s.push(i);
//    }
//    for (int j, i = 1; i <= q; ++i) {
//        scanf("%d", &j);
//        printf("%d%c", ans[j] == n + 1 ? 0 : ans[j], i == q ? '\n' : ' ');
//    }
//    return 0;
//}