//////#define _CRT_SECURE_NO_WARNINGS
//////#include<stdio.h>
//////int n, x, y, a[1000000];
//////int main()
//////{
//////	scanf("%d", &n);
//////	for (int i = 0; i < n; i++) {
//////		scanf("%d%d", &x, &y);
//////		a[i] = x ^ y;
//////	}
//////	for (int i = 0; i < n; i++) {
//////		printf("%d\n", a[i]);
//////	}
//////	return 0;
//////}
// 
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int n, x, y, a;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		scanf("%d%d", &x, &y);
//		a = x ^ y;
//		printf("%d\n", a);
//	}
//	return 0;
//}

//使用数组时无法运行，不知道为什么
//已解决，将数组定义为全局变量才会将数组内部附上0，
//若定义为局部变量，数组内部是乱的，无法计算