//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int n, ok = 1, p[5];
//int main()
//{
//	scanf("%lld", &n);
//	for (int x, i = 1; i <= n; i++) {
//		scanf("%d", &x);
//		p[x / 25]++;
//		x -= 25;
//		for (int i = 2; i > 0; i--) {
//			while (p[i] && x >= 25 * i) {
//				p[i]--;
//				x -= i * 25;
//			}
//		}
//		if (x == 0)continue;
//		ok = 0; 
//	    break;
//	}
//	printf("%s\n", ok ? "YES" : "NO");
//	return 0;
//}

//数组的用法