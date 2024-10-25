//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//int N, R, ans[30];
//char RS[] = "0123456789ABCDEFGHIJ";
//signed main(void) {
//    int r, cnt = 0;
//    scanf("%d%d", &N, &R);
//    printf("%d=", N);
//    while (N < 0 || N >= -R) {
//        r = N - N / R * R;
//        if (r < 0) r -= R;
//        ans[++cnt] = r;
//        N = (N - r) / R;
//    }
//    ans[++cnt] = N;
//    for (int i = cnt; i > 0; --i)  printf("%c", RS[ans[i]]);
//    printf("(base%d)\n", R);
//    return 0;
//}