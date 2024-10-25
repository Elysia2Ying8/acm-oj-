//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int a[26], maxn = 0, minn = 200;
//char ch, s[256];
//int main()
//{
//    scanf("%s", s);
//    for (int i = 0; s[i]; i++)a[s[i]-'a']++;
//    for (int i = 0; i < 26; i++) {
//        if (a[i] == 0)continue;
//        if (a[i] > maxn)maxn = a[i];
//        if (a[i] < minn)minn = a[i];
//    }
//    int n, m = 0;
//    n = maxn - minn;
//    if (n == 0 || n == 1)printf("No Answer\n0\n");
//    else if (n >= 2) {
//        for (int i = 2; i <= 100; i++) {
//            if (n % i == 0)m++;
//        }
//        if (m == 1)printf("Lucky Word\n%d\n", n);
//        else printf("No Answer\n0\n");
//    }
//    return 0;
//}