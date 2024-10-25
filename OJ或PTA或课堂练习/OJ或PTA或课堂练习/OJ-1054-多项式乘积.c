//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int n, m, a[3000], b[3000];
//int main()
//{
//    scanf("%d%d", &n, &m);
//    for (int i = n; i >= 0; i--)scanf("%d", &a[i]);
//    for (int i = m; i >= 0; i--)scanf("%d", &b[i]);
//    int p = m + n;
//    while (p >= 0) {
//        int ans = 0;
//        for (int i = n; i >= 0; i--) {
//            for (int j = m; j >= 0; j--) {
//                if (i + j == p)ans += a[i] * b[j];
//            }
//        }
//        printf("%d\n", ans);
//        p--;
//    }
//    return 0;
//}
//可以更简化



//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int n, m, a[3000], b[3000], c[6000];
//int main()
//{
//    int i, j;
//    scanf("%d%d", &n, &m);
//    for (i = n; i >= 0; i--)scanf("%d", &a[i]);
//    for (i = m; i >= 0; i--)scanf("%d", &b[i]);
//    for (i = n; i >= 0; i--) {
//        for (j = m; j >= 0; j--) {
//            c[i + j] += a[i] * b[j];
//        }
//    }
//    for (i = n + m; i >= 0; i--) {
//        printf("%d\n", c[i]);
//    }
//    return 0;
//}

//采用数组c，比原来的可以少一个循环