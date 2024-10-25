//#define _CRT_SECURE_NO_WARNINGS
////#include<stdio.h>
////
////int a[1000002], b[1000002], n, i, j;
////int main()
////{
////	while (scanf("%d", &n) == 1) {
////		if (n == 0)break;
////		else {
////			for (i = 1; i <= n; i++) {
////				scanf("%d", &a[i]);
////			}
////			for (i = 1; i <= n; i++) {
////				for (j = 1; j <= i; j++) {
////					b[i] += a[j];
////				}
////				printf("%d ", b[i]);
////			}
////			printf("\n");
////		}
////	}
////	return 0;
////}
//
////为什么原来的数组不能覆盖掉
//
////#include<stdio.h>
////int a[1000005], b[1000005], n;
////int main()
////{
////	while (scanf("%d", &n) == 1 && n != 0) {
////		for (int i = 1; i <= n; i++) {
////			scanf("%d", a + i);
////			b[i] = a[i];
////		}
////		for (int i = 1; i <= n; i++) {
////			b[i] += b[i - 1];
////			printf("%d%c", b[i], i == n ? '\n' : ' ');
////		}
////	}
////	return 0;
////}