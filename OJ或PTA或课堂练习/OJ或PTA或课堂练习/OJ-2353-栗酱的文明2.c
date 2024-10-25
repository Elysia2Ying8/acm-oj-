//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//int n, b[1002], ans;
//void solve() {
//	memset(b, 0, sizeof b);
//	scanf("%d", &n);
//	for (int a, i = 1; i <= n; i++) {
//		scanf("%d", &a);
//		b[a]++;
//	}
//	for (int i = n; i > 0; i--) {
//		b[i] += b[i + 1];
//		if (i >= b[i])ans = b[i];
//		else if (i > b[i + 1])ans = i;
//	}
//	printf("%d\n", ans == 1 ? 0 : ans);
//}
//int main()
//{
//	int t;
//	scanf("%d", &t);
//	while (t--)solve();
//	return 0;
//}

//½è¼ø´ð°¸µÄ