//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int n, m, a[1000005], b[1000005], c[1000005];
//int main()
//{
//	scanf("%d%d", &n, &m);
//	for (int i = 1; i <= n; i++) {
//		scanf("%d", &a[i]);
//		b[a[i]]++;
//	}
//	for (int i = 2; i < 1000005; i++)
//		b[i] += b[i - 1];
//	for (int i = 1; i <= n; i++)
//		c[b[a[i]]] = i, b[a[i]]--;
//	for (int x, i = 1; i <= m; i++) {
//		scanf("%d", &x);
//		printf("%d\n", c[x]);
//	}
//	return 0;
//}