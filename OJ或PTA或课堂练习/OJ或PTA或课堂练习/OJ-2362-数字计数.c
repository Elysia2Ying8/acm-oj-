//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a, n, mx1, mx2, mn1, mn2;
//	scanf("%d", &n);
//	if (n >= 1) {
//		scanf("%d", &a);
//	    mx1 = a, mx2 = a, mn1 = a, mn2 = a;
//	}
//	if (n >= 2) {
//		scanf("%d", &a);
//		if (a > mx1)mx1 = a;
//		else mx2 = a;
//		if (a < mn1)mn1 = a;
//		else mn2 = a;
//	}
//	for (int i = 3; i <= n; i++) {
//		scanf("%d", &a);
//		if (a > mx1) mx2 = mx1, mx1 = a;
//		else if (a > mx2)mx2 =a;
//		if (a < mn1) mn2 = mn1, mn1 = a;
//		else if (a < mn2)mn2 = a;
//	}
//	printf("%d %d %d %d", mx1 - mx2, mx1 - mn2, mx2 - mn2, mx2 - mn1);
//	return 0;
//}

//屈服于标准答案，还是要多思考各种情况