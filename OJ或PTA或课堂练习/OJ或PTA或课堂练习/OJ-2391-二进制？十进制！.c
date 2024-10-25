//#define _CRT_SECURE_NO_WARNINGS
////////#include<stdio.h>
////////int main()
////////{
////////    long long a, b, x, A=0, B=0;
////////	scanf("%lld%lld", &a, &b);
////////	while (a > 0) {
////////		static x = 1;
////////		A += a % 2 * x;
////////		a /= 2;
////////		x *= 10;
////////	}
////////	while (b > 0) {
////////		static x = 1;
////////		B += b % 2 * x;
////////		b /= 2;
////////		x *= 10;
////////	}
////////	printf("%lld", A + B);
////////	return 0;
////////}
////////无法输出32位的二进制数
//
// 
// 
//#include<stdio.h>
//int main()
//{
//	long long a, b, x=1, sum=0;
//	scanf("%lld%lld", &a, &b);
//	while (a || b) {
//		sum += (a % 2 + b % 2) * x;
//		a >>= 1, b >>= 1;
//		x *= 10;
//	}
//	printf("%lld\n", sum);
//	return 0;
//}
//
