//#define _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e3 + 5;
//int n, a[mxn], b[mxn], c[mxn];
//signed main()
//{
//    scanf("%d", &n);
//    for (int i = 1; i <= n; i++) {
//        scanf("%d", a + i);
//        b[a[i]]++;
//    }
//    for (int i = 1; i < mxn; i++) {
//        if (b[i] != 0)b[i] = 1;
//        b[i] += b[i - 1];
//    }
//    printf("%d\n", b[mxn - 1]);
//    for (int i = 1; i < mxn; i++) {
//        c[b[a[i]]] = a[i];
//    }
//    for (int i = 1; i <= b[mxn - 1]; i++) {
//        printf("%d%c", c[i], i == b[mxn - 1] ? '\n' : ' ');
//    }
//    return 0;
//}