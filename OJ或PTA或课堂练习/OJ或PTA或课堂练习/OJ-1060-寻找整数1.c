//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int a[250], b[250], n, m, ans = 0;
//int main()
//{
//	scanf("%d%d", &n, &m);
//	for (int i = 1; i <= n; i++) {
//		scanf("%d", a + i);
//	}
//	for (int i = 1; i <= m; i++) {
//		scanf("%d", b + i);
//	}
//	for (int k = 1; k <= m; k++) {
//		ans = 0;
//		for (int j = 1; j <= n; j++) {
//			for (int i = 1; i <= n; i++) {
//				if (a[i] + a[j] == b[k] && i != j) {
//					++ans;
//				}
//			}
//		}
//		if (ans == 0)printf("no\n");
//		else printf("yes\n");
//	}
//
//	return 0;
//}