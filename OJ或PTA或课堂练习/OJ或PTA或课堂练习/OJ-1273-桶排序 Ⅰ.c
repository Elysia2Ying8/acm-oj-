//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int n, m, x, a[10000000], b[10000000], c[10000000];
//int main()
//{
//	scanf("%d%d", &n, &m);
//	for (int i = 1; i <= n; i++) {
//		scanf("%d", &a[i]);
//		c[a[i]]++;
//	}
//	for (int i = 2; i <= n; i++) {
//		c[i] += c[i - 1];
//	}
//	for (int i = n; i >= 1; i--) {
//		b[c[a[i]]] = a[i], c[a[i]]--;
//	}
//	for (int j = 1; j <= m; j++) {
//		scanf("%d", &x);
//		for (int i = 1; i <= n; i++) {
//			if (b[x] == a[i]) {
//				printf("%d\n", i);
//				break;
//			}
//		}
//	}
//	return 0;
//}

//还是不会

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//const int mxn = 1e6 + 5;
//int n, m, x, a[10000000], b[10000000], c[10000000];
//int main()
//{
//	scanf("%d%d", &n, &m);
//	for (int i = 1; i <= n; i++) {
//		scanf("%d", &a[i]);
//		c[a[i]]++;
//	}
//	for (int i = 2; i <= mxn; i++) {
//		c[i] += c[i - 1];
//	}
//	for (int i = n; i >= 1; i--) {
//		b[c[a[i]]] = i, c[a[i]]--;
//	}
//	for (int j = 1; j <= m; j++) {
//		scanf("%d", &x);
//		printf("%d\n", b[x]);
//	}
//	return 0;
//}

//不用排序了，直接将原数组的下标排序