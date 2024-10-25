//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int n;
//int main()
//{
//	scanf("%d", &n);
//	if (n < 0) {
//		for (int i = 31; i >= 0; i--) {
//			if (i == 31)printf("1");
//			else {
//				int m = (~(n - 1)) >> i & 1;
//				printf("%d", m);
//			}
//		}
//		printf("\n");
//		for (int i = 31; i >= 0; i--) {
//			if (i == 31)printf("1");
//			else {
//				int m = (n - 1) >> i & 1;
//				printf("%d", m);
//			}
//		}
//		printf("\n");
//		for (int i = 31; i >= 0; i--) {
//			int m = n >> i & 1;
//			printf("%d", m);
//		}
//	}
//	else {
//		for (int j = 1; j <= 3; j++) {
//			for (int i = 31; i >= 0; i--) {
//				int m = n >> i & 1;
//				printf("%d", m);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//
