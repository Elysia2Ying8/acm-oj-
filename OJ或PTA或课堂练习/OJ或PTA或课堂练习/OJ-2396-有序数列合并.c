//#define _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e3 + 5;
//int n, m, a[mxn], b[mxn];
//signed main()
//{
//    scanf("%d%d", &n, &m);
//    for (int i = 1; i <= n; i++)scanf("%d", a + i);
//    for (int i = 1; i <= m; i++)scanf("%d", b + i);
//    int pa = 1, pb = 1, tot = 0;
//    while (pa <= n && pb <= m) {
//        if (a[pa] < b[pb])printf("%d ", a[pa++]);
//        else printf("%d ", b[pb++]);
//        ++tot;
//    }
//    while (pa <= n)printf("%d%c", a[pa++], ++tot == m + n ? '\n' : ' ');
//    while (pb <= m)printf("%d%c", b[pb++], ++tot == m + n ? '\n' : ' ');
//    return 0;
//}

//c++