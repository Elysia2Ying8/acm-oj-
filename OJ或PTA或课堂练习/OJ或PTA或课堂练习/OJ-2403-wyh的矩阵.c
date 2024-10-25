//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int t, n, a[10005][10005], ans;
//int main()
//{
//	int i, j, m = 1;
//	scanf("%d", &t);
//	while (t--) {
//		scanf("%d", &n);
//		for (i = 1; i <= n; i++) {
//			for (j = 1; j <= n; j++) {
//				a[i][j] = m;
//				++m;
//			}
//		}
//		ans = 0;
//		for (i = 0; i < (n+1)/2; i++) {
//			for (j = (n + 1) / 2 - i; j <= (n + 1) / 2 + i; j++) {
//				ans += a[i + 1][j];
//			}
//		}
//		for (i = (n+1)/2-1; i > 0 ; i--) {
//			for (j = (n + 1) / 2 + 1 - i; j <= (n + 1) / 2 - 1 + i; j++) {
//				ans += a[i + (n + 1) / 2+1][j];
//			}
//		}
//		printf("%d\n", ans);
//	}
//	return 0;
//}

//待办，不知道哪里出了问题，但是本身写的也烂
//不要再浪费时间了，学习答案的方法吧，别死磕，没意义